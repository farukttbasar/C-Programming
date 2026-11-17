# include <stdio.h>
#define ROWS 3
#define COLS 4

void transposeMatrix(int arr1[][COLS], int arr2[][ROWS]);


int main(void) {
	int arr[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int i, j;
	
	puts("--- Original Table ---");
	
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%4d", arr[i][j]);
		}
		puts("");
	}
	
	int transposed[COLS][ROWS];
	transposeMatrix(arr, transposed);
	
	puts("--- Transcibed Table ---");
	
	for (i = 0; i < COLS; i++) {
		for (j = 0; j < ROWS; j++) {
			printf("%4d", transposed[i][j]);
		}
		puts("");
	}
	
	return 0;   
}

void transposeMatrix(int arr1[ROWS][COLS], int arr2[COLS][ROWS]) {
	int i, j;
	
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			arr2[j][i] = arr1[i][j];
		}
	}
}


