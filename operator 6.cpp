#include<stdio.h>
int main()
{
	int a;
	printf("Enter the year:\n");
	scanf("%d",&a);
	if(a%400==0){
		printf("%d is a century leap year.",a);
	}
	else if(a%4==0){
		printf("%d is leap year.",a);
	}
	else{
		printf("%d is not a leap year.",a);
	}
	return 0;
}
