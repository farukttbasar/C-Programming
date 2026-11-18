# include <stdio.h>

int main(void) {
	int arr[10] = {35, 38, 42, 90, 40, 37, 95, 41, 39, 88};
	
	int i, counter = 0;
	
	for (i = 0; i < 10; i++) {
		if (arr[i] > 80) {
			counter++;
			printf("Sensor %d: %d C - ANORMAL\n", i + 1, arr[i]);
		}
	}
	
	printf("Toplam anormal olcum: %d", counter);
	
	return 0;
}
