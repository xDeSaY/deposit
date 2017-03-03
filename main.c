#include <stdio.h>

int check(int day, int sum)
{
	if((day > 365)) {
		return -1;
	}
	if(sum<1000) {
		return -1;
	}
	return 0;
}

int main()
{
	int day, sum, res;

	printf("Enter the deposit amount: ");
	scanf("%d", &sum);

	printf("Enter the deposit term: ");
	scanf("%d", &day);

	while(check(day, sum) == -1) {
		printf("Data is entered incorrectly\n");

		printf("Enter the deposit amount: ");
		scanf("%d", &sum);

		printf("Enter the deposit term: ");
		scanf("%d", &day);
	}
	
	if((day >= 0) && (day <= 30)) {
		res = sum * 0.9;
		printf("%d", res);
	}

	if((day >= 31) && (day <= 120)) {
		res = sum * 1.02;
		printf("%d", res);
	}

	if((day >= 121) && (day <= 240)) {
		res = sum * 1.06;
		printf("%d", res);
	}

	if((day >= 241) && (day <= 365)) {
		res = sum * 1.12;
		printf("%d", res);
	}

	return 0;
}
