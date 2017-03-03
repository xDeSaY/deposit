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
	int day, sum;

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

	return 0;
}
