# include <stdio.h>

/*
A program receives an integer array containing n elements. Complete the function countSpecial according to these rules:

An element is considered special if:
1. It is greater than every element before it.
2. It appears exactly once in the entire array.
The first element has no preceding elements, so it satisfies the first condition automatically.
*/

int countSpecial(int arr[], int n);

int main(void) {
	int n;
	scanf("%d", &n);
	
	int arr[n];
	int i;
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("%d", countSpecial(arr, n));
	
	return 0;
}

int countSpecial(int arr[], int n) {
	int counter = 0;
	int i, j, k;
	
	for (i = 0; i < n; i++) {
		int isGreatest = 1;
		int frequency = 0;
		
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[i]) {
				isGreatest = 0;
				break;
			}
		}
		
		for (k = 0; k < n; k++) {
			if (arr[k] == arr[i]) {
				frequency++;
			}
		}
		
		if (isGreatest && frequency == 1) {
		counter++;
		}
	}
	
	
	
	return counter;
}
