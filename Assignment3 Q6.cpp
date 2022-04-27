#include<stdio.h>
int main(){
	int i,num,Factorial=1;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	Factorial=Factorial*i;
	printf("Factorial of %d is :%d",num,Factorial);
	return 0;
}
