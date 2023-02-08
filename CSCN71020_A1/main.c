#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void sub();

void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf("%1o", &inputNum);
	printf("Welcome\n");

	switch (inputNum)
	{
	case 1:
		add();
        return;
    case 2:
        sub();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf("%lf", &num1);
	printf("Enter the second value:");
	scanf("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}


void sub() {
    double num1, num2, result;
    printf("Enter the first value:");
    scanf("%lf", &num1);
    printf("Enter the second value:");
    scanf("%lf", &num2);
    result = num1 - num2;
    printf("%lf - %lf = %lf\n", num1, num2,result);
}