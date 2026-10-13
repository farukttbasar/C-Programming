# include <stdio.h>
# include <ctype.h>

# define GRID_ROWS 8
# define GRID_COLS 8
# define INITIAL_BATTERY 100
# define STEP_ENERGY_COST 10

void initialize_grid(char grid[GRID_ROWS][GRID_COLS]);
void render_grid(char grid[GRID_ROWS][GRID_COLS], int battery, int steps);
int is_valid_move(char grid[GRID_ROWS][GRID_COLS], int target_x, int target_y);

int main(void) {
    char grid[GRID_ROWS][GRID_COLS];
    int pos_x = 0;
    int pos_y = 0;
    int battery_level = INITIAL_BATTERY;
    int total_steps = 0;
    char command;

    initialize_grid(grid);

    printf("=========================================\n");
    printf("        ROBOT GRID SIMULATOR             \n");
    printf("=========================================\n");
    printf("Commands: W (Up), S (Down), A (Left), D (Right), Q (Quit)\n");
    printf("Legend  : R = Robot, T = Target, # = Wall, C = Charging Station\n\n");

    while (1) {
        render_grid(grid, battery_level, total_steps);

        if (battery_level <= 0) {
            printf("\nGAME OVER: Robot ran out of battery!\n");
            break;
        }

        printf("Enter command (W/A/S/D/Q) > ");
        if (scanf(" %c", &command) != 1) {
            while (getchar() != '\n');
            printf("Invalid input! Try again.\n");
            continue;
        }

        command = toupper(command);

        if (command == 'Q') {
            printf("\nSimulation terminated by user.\n");
            break;
        }

        int next_x = pos_x;
        int next_y = pos_y;

        if (command == 'W') {
            next_x--;
        } else if (command == 'S') {
            next_x++;
        } else if (command == 'A') {
            next_y--;
        } else if (command == 'D') {
            next_y++;
        } else {
            printf("Invalid command! Use W, A, S, D, or Q.\n");
            continue;
        }

        if (is_valid_move(grid, next_x, next_y)) {
            char target_cell = grid[next_x][next_y];

            // Eski konumu boş hücre yap
            grid[pos_x][pos_y] = '.';

            // Koordinatları güncelle
            pos_x = next_x;
            pos_y = next_y;

            // Robotu yeni konuma yerleştir
            grid[pos_x][pos_y] = 'R';

            total_steps++;
            battery_level -= STEP_ENERGY_COST;

            // Özel hücre kontrolleri
            if (target_cell == 'C') {
                battery_level = INITIAL_BATTERY;
                printf("\n>>> RECHARGED: Battery restored to 100%%! <<<\n");
            } else if (target_cell == 'T') {
                render_grid(grid, battery_level, total_steps);
                printf("\nCONGRATULATIONS: Target reached successfully!\n");
                printf("Final Steps   : %d\n", total_steps);
                printf("Final Battery : %d%%\n", battery_level);
                break;
            }
        } else {
            printf("Cannot move there! Wall hit or boundary reached.\n");
        }
    }

    return 0;
}

void initialize_grid(char grid[GRID_ROWS][GRID_COLS]) {
    // Tüm ızgarayı boş hücre ile doldur
    for (int r = 0; r < GRID_ROWS; r++) {
        for (int c = 0; c < GRID_COLS; c++) {
            grid[r][c] = '.';
        }
    }

    // Başlangıç, hedef ve şarj istasyonu konumları
    grid[0][0] = 'R'; // Robot
    grid[7][7] = 'T'; // Target
    grid[2][5] = 'C'; // Charging Station

    // Sabit engeller (duvarlar)
    grid[1][2] = '#';
    grid[2][2] = '#';
    grid[3][2] = '#';
    grid[4][4] = '#';
    grid[5][4] = '#';
    grid[6][1] = '#';
}

void render_grid(char grid[GRID_ROWS][GRID_COLS], int battery, int steps) {
    printf("\n+ - - - - - - - - +\n");
    for (int r = 0; r < GRID_ROWS; r++) {
        printf("| ");
        for (int c = 0; c < GRID_COLS; c++) {
            printf("%c ", grid[r][c]);
        }
        printf("|\n");
    }
    printf("+ - - - - - - - - +\n");
    printf("Battery: %3d%% | Steps: %2d\n", battery, steps);
}

int is_valid_move(char grid[GRID_ROWS][GRID_COLS], int target_x, int target_y) {
    // 1. Sınır kontrolü (harita dışı mı?)
    if (target_x < 0 || target_x >= GRID_ROWS || target_y < 0 || target_y >= GRID_COLS) {
        return 0;
    }

    // 2. Engel/duvar kontrolü
    if (grid[target_x][target_y] == '#') {
        return 0;
    }

    return 1;
}