# include <stdio.h>

int main(void) {
	int arr[8] = {1500, 3200, 2800, 4500, 1200, 6000, 3700, 2100};
	
	int search;
	printf("Aranacak izlenme sayisi: ");
	scanf("%d", &search);
	
	int i;
	int found = 0;
	for (i = 0; i < 8; i++) {
		if (arr[i] == search) {
			found = 1;
			break;			
		}
	}
	
	if (found) {
		printf("Video %d bulundu\n", i + 1);
	} else {
		printf("Video bulunamadi!");
	}
	return 0;
}
