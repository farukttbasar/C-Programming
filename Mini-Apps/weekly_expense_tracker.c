# include <stdio.h>
# define DAYS_IN_WEEK 7

void show_menu(void);
void print_full_breakdown(float expenses[], int days);
void print_days_above_limit(float expenses[], int days, float daily_limit);
float calculate_total(float expenses[], int days);
float calculate_average(float expenses[], int days);
int find_highest_day(float expenses[], int days);
int find_lower_day(float expenses[], int days);

int main(void) {
    float expenses[DAYS_IN_WEEK];
    int choice;
    int target_day;
    int low_idx;
    int high_idx;
    float new_amount;
    float daily_limit;

    printf("-------- WEEKLY EXPENSE TRACKER --------\n");

    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        while (1) {
            printf("Enter expense for the DAY-%d > ", i + 1);

            if (scanf("%f", &expenses[i]) == 1 && expenses[i] >= 0.0f) {
                break;
            }

            while (getchar() != '\n');
            printf("Invalid amount! Please enter a non-negative number.\n");
            
        }
    }

    while (1) {
        show_menu();
        printf("Select an option from the menu > ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number");
            continue;
        }

        if (choice == 0) {
            printf("Exiting system...");
            break;
        }

        switch (choice) {
            case 1:
                printf("*** View Full Week Breakdown ***\n");
                print_full_breakdown(expenses, DAYS_IN_WEEK);
                break;

            case 2:
                printf("*** View Total & Average Spending ***\n");
                printf("\n---------- SUMMARY -----------\n");
                printf("Total expenses    : %.2f\n", calculate_total(expenses, DAYS_IN_WEEK));
                printf("Daily Average     : %.2f\n", calculate_average(expenses, DAYS_IN_WEEK));
                break;

            case 3:
            printf("*** View Highest & Lowest Spending Days ***\n");
                low_idx = find_lower_day(expenses, DAYS_IN_WEEK);
                high_idx = find_highest_day(expenses, DAYS_IN_WEEK);
                printf("\n---------- RESULT -----------\n");
                printf("Highest Spending : Day %d ($%.2f)\n", high_idx + 1, expenses[high_idx]);
                printf("Lowest Spending  : Day %d ($%.2f)\n", low_idx + 1, expenses[low_idx]);
                break;

            case 4:
                printf("*** Check Days Over Spending Limit ***\n");
                while (1) {
                    printf("Enter daily limit ($) > ");
                    if (scanf("%f", &daily_limit) == 1 && daily_limit >= 0.0f) {
                        break;
                    }
                    while (getchar() != '\n');
                    printf("Please enter a valid positive limit.\n");
                    
                }
                print_days_above_limit(expenses, DAYS_IN_WEEK, daily_limit);
                break;

            case 5:
                printf("*** Update a Specific Day's Expense ***\n");
                while (1) {
                    printf("DAY-1 : %.2f\n", expenses[0]);
                    printf("DAY-2 : %.2f\n", expenses[1]);
                    printf("DAY-3 : %.2f\n", expenses[2]);
                    printf("DAY-4 : %.2f\n", expenses[3]);
                    printf("DAY-5 : %.2f\n", expenses[4]);
                    printf("DAY-6 : %.2f\n", expenses[5]);
                    printf("DAY-7 : %.2f\n", expenses[6]);
                    printf("Enter day number from above to update > \n");
                    if (scanf("%d", &target_day) == 1 && target_day >= 1 && target_day <= DAYS_IN_WEEK) {
                        break;
                    }
                    while (getchar() != '\n');
                    printf("Invalid day! Must be between 1 and %d.\n", DAYS_IN_WEEK);
                    
                }

                while (1) {
                        printf("Enter the new amount for DAY-%d\n", target_day);
                        if (scanf("%f", &new_amount) == 1 && new_amount >= 0.0f) {
                            expenses[target_day - 1] = new_amount;
                            printf("Success: Day %d updated to $%.2f.\n", target_day, new_amount);
                            break;
                        }
                        while (getchar() != '\n');
                        printf("Invalid amount! Please enter a non-negative number.\n");
                        
                        
                }

            default:
                printf("Invalid selection! Please enter a number between 0 and 5.\n");
                break;
        }

    }
}

void show_menu(void) {
    printf("\n=======================================\n");
    printf("        EXPENSE TRACKER MENU           \n");
    printf("=======================================\n");
    printf("1 - View Full Week Breakdown\n");
    printf("2 - View Total & Average Spending\n");
    printf("3 - View Highest & Lowest Spending Days\n");
    printf("4 - Check Days Over Spending Limit\n");
    printf("5 - Update a Specific Day's Expense\n");
    printf("0 - Exit\n");
    printf("=======================================\n");
}

void print_full_breakdown(float expenses[], int days) {
    printf("\n---------- WEEKLY BREAKDOWN -----------\n");
    printf("Day           Expense\n");
    printf("---------------------------------------\n");
    for (int i = 0; i < days; i++) {
        printf("DAY-%d          $%.2f\n", i + 1, expenses[i]);
    }
    printf("---------------------------------------\n");
}

float calculate_total(float expenses[], int days) {
    float total = 0;

    for (int i = 0; i < days; i++) {
        total += expenses[i];
    }
    return total;
}

float calculate_average(float expenses[], int days) {
    return calculate_total(expenses, days) / (float)days; 
}

int find_highest_day(float expenses[], int days) {
    int max_i = 0;
    for (int i = 1; i < days; i++) {
        if (expenses[i] > expenses[max_i]) {
            max_i = i;
        }
    }
    return max_i;
}

int find_lower_day(float expenses[], int days) {
    int min_i = 0;
    for (int i = 1; i < days; i++) {
        if (expenses[i] < expenses[min_i]) {
            min_i = i;
        }
    }
    return min_i;
}

void print_days_above_limit(float expenses[], int days, float daily_limit) {
    int counter = 0;
    
    for (int i = 0; i < days; i++) {
        if (expenses[i] > daily_limit) {
            printf("DAY-%d: $%.2f (exceeded $%.2f)\n", i + 1, expenses[i], expenses[i] - daily_limit);
            counter++;
        }
    }

    if (counter == 0) {
        printf("Perfect! There isn't any days exceeded the limit of $%.2f\n", daily_limit);
    } else {
        printf("Total limit-exceeded days: %d\n", counter);
    }
}
