#include<stdio.h>
int main()
{
	int intType;
	char charType;
	double doubleType;
	float floatType;
	
	printf("The size of intType: %zu \n", sizeof(intType));
	printf("The size of charType: %zu\n", sizeof(charType));
	printf("The size of doubleType: %zu\n", sizeof(doubleType));
	printf("The size of floatType: %zu\n", sizeof(floatType));
	return 0;
}
