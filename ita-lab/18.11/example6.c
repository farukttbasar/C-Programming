# include <stdio.h>
# define ROWS 4
# define COLS 4

void printIncreasedArray(int arr[ROWS][COLS]);

int main(void) {
	int arr[ROWS][COLS];
	
	int i, j;
	
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	printIncreasedArray(arr);
	
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			if (arr[i][j] + 50 > 255) {
				arr[i][j] = 255;
			} else {
				arr[i][j] += 50;
			}
		}
	}
	
	puts("-----Increased Array-----");
	printIncreasedArray(arr);
	
	
	return 0;
}

void printIncreasedArray(int arr[ROWS][COLS]) {
	int i, j;
	
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}
