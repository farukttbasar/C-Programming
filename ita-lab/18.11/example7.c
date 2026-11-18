# include <stdio.h>

int main(void) {
	int arr[5][5] = {
		{0, 0, 1, 0, 0},
		{0, 1, 0, 0, 1},
		{0, 0, 0, 1, 0},
		{1, 0, 0, 0, 0},
		{0, 1, 0, 0, 1},
	};
	
	int counter = 0;
	int i, j;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (arr[i][j] == 1) {
				counter++;
				printf("Engel: (%d, %d)\n", i, j);
			}
		}
	}
	printf("Toplam engel: %d", counter);
	
	return 0;
}
