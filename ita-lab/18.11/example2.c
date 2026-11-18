# include <stdio.h>

int main(void) {
    int arr[6] = {45, 78, 92, 61, 85, 70};
    
    int max = arr[0];
    int max_i = 0;
    int i;
    
    for (i = 0; i < 6; i++) {
    	if (arr[i] > max) {
    		max = arr[i];
    		max_i = i;
		}
	}
	
	printf("En yuksek cpu kullanimi: %%%d\n", max);
	printf("Sunucu numarasi: %d", max_i + 1);
	
	return 0;
}
