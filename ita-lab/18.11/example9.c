# include <stdio.h>

int main(void) {
	int arr[6] = {120, 115, 98, 85, 70, 55};
	
	int i;
	int rev_arr[6];
	for (i = 0; i < 6; i++) {
		rev_arr[6 - i - 1] = arr[i];
	}
	
	for (i = 0; i < 6; i++) {
		printf("%d ", rev_arr[i]);
	}
	
	return 0;
}
