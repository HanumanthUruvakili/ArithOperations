#include <stdio.h>

int main()
{

	int a = 10;
	int b = 20;
	int res = 0;
	int choice = 0;

printf("Enter 1 for addition \n 2 for Sub \n 3 for Mul\n");
scanf("%d", &choice);

switch(choice)
{
case 1: res = a + b; break;
case 2: res = a - b; break;
case 3: res = a * b; break;
default: printf("invalid choice\n"); break;
}

printf("res = %d\n", res);
return 0;
}

