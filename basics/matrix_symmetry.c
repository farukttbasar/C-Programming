# include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	int arr[n][n];
	
	int i, j;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	int isSymmetric = 1;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n ; j++) {
			if (arr[i][j] != arr[j][i]) {
				isSymmetric = 0;
				break;
			}
		}
		if (isSymmetric == 0) {
			break;
		}
	}
	
	if (isSymmetric) {
		puts("Symmetric");
	} else {
		puts("Not symmetric");
	}
	
	return 0;	
}
