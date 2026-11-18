# include <stdio.h>

int main(void) {
	int arr[3][4] = {
		{65, 70, 72, 68},
		{75, 80, 78, 73},
		{60, 64, 69, 71}	
	};
	
	int i, j;
	
	for (i = 0; i < 3; i++) {
		printf("Sunucu %d:\n", i + 1);
		for (j = 0; j < 4; j++) {
			printf("GPU %d: %d\n", j + 1, arr[i][j]);
		}
	}
	
	return 0;
}
