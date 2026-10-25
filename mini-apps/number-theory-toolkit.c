# include <stdio.h>

void display_menu(void);
void prime_checker(int num);
void perfect_checker(int num);
void palindrome_checker(int num);
void collatz_generator(int num);

int main(void) {
	int choice;
	int num;
	
	while (1) {
		display_menu();

		printf("Choice > ");
		if (scanf("%d", &choice) != 1) {
			break;
		}
		
		if (choice == 0) {
			puts("Goodbye!");
			break;
		}
		
		if (choice < 1 || choice > 4) {
			puts("Please enter an integer from the menu!");
			continue;
		}
		
		printf("Enter an integer between 1-100000 (inclusive) > ");
		if (scanf("%d", &num) != 1) {
			break;
		}
		
		if (num < 1 || num > 100000) {
			puts("Please enter an integer in the given range!");
			continue;
		}
		
		switch (choice) {
			case 1:
				prime_checker(num);
				break;
			case 2:
				perfect_checker(num);
				break;
			case 3:
				palindrome_checker(num);
				break;
			case 4:
				collatz_generator(num);
				break;
		}	
	}
	return 0;	
}

void display_menu(void) {
	puts("=== Number Theory Toolkit ===");
	puts("1. Prime classification");
	puts("2. Perfect number check");
	puts("3. Palindrome check");
	puts("4. Collatz sequence");
	puts("0. Exit");
}

void prime_checker(int num) {
	int i;
	int is_prime = 1;
	if (num == 1) {
		puts("Prime: NEITHER");
		return;
	}
	
	for (i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			is_prime = 0;
			break;			
		}
	}
	
	if (is_prime) {
		puts("Prime: PRIME");
	} else {
		puts("Prime: COMPOSITE");
	}
}

void perfect_checker(int num) {
	int i;
	int sum = 0;
	
	for (i = 1; i <= (num / 2); i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	
	if (sum == num) {
		puts("Perfect: PERFECT");
	} else {
		puts("Perfect: NOT PERFECT");
	}
}

void palindrome_checker(int num) {
	int temporary = num;
	int reversed = 0;
	
	while (temporary > 0) {
		reversed = (reversed * 10) + (temporary % 10);
		temporary /= 10;
	}
	
	if (reversed == num) {
		puts("Palindrome: PALINDROME");
	} else {
		puts("Palindrome: NOT PALINDROME");
	}
}

void collatz_generator(int num) {
	int current = num;
	
	printf("Collatz: %d", current);
	
	while (current != 1) {
		if (current % 2 == 0) {
			current /= 2;
		} else {
			current = (current * 3) + 1;
		}
		
		printf(" %d", current);
	}
	printf("\n");
}


