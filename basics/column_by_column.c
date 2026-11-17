# include <stdio.h>

int main(void) {
	int r, c;
	scanf("%d %d", &r, &c);
	
	int arr[r][c];
	
	int i, j;
	
	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
			scanf("%d", &arr[j][i]);
		}
	}
	
	for (i = 0; i < c; i++) {
		int max = arr[0][i];
		int sum = 0;
		
		for (j = 0; j < r; j++) {
			sum += arr[j][i];
			
			if (arr[j][i] > max) {
				max = arr[j][i];
			}
		}
		
		float average = (float) sum / r;
		
		printf("Column %d --- MAX: %d, AVERAGE: %.2f\n", i, max, average);
		
    }
    
    return 0;
   
}
		
