#include<stdio.h>
int main()
{
	char color;
	printf("Enter the character:\n");
	scanf("%c",&color);
	switch(color){
		case 'r':
		case 'R':
			printf("RED");
			break;
		case 'g':
		case 'G':
			printf("GREEN");
			break;
		case 'b':
		case 'B':
			printf("GREEN");
			break;
		default:
			printf("BLACK");
			break;
	}
}
