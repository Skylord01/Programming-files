#include<stdio.h>
int main()
{
	int a,b,MENU;
	printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Square\n 6.Cube\n");
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Enter your choice:\n");
	scanf("%d",&MENU);

switch(MENU)
{

		case 1:
			printf("Sum of %d and %d is %d",a,b,a+b);
			break;
		case 2:
			printf("Difference of %d and %d is %d",a,b,a-b);
			break;
		case 3:
			printf("Product of %d and %d is %d",a,b,a*b);
			break;
		case 4:
			printf("Division of two numbers is:%d",a/b);
			break;
		case 5:
			printf("Square of %d & %d is %d and %d",a,b,a*a,b*b);
			break;
		case 6:
			printf("Cube of %d & %d is %d and %d",a,b,a*a*a,b*b*b);
			break;
		default:
			printf("Input only the numbers from 1 to 6 to access the list.");
	}
	return 0;
}
