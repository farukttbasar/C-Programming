# include <stdio.h>

int main(void) {
    int arr[10] = {1, 1, 0, 1, 0, 0, 1, 1, 0, 1};
    
    int i;
    int countSuccess = 0, countFailed = 0;
    for (i = 0; i < 10; i++) {
    	if (arr[i] == 1) {
    		countSuccess++;
		} else {
			countFailed++;
		}
	}
	
	printf("Basarili giris: %d\n", countSuccess);
	printf("Basarisiz giris: %d\n", countFailed);
	
	if (countFailed >= 3) {
		puts("UYARI: Supheli giris hareketleri!");
	}
	
	return 0;
}
