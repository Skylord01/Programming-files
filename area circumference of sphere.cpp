#include<stdio.h>
int main()
{
	int x;
	double Sum;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	Sum= 1-(x^2/2*1)+(x^4/4*3*2*1)-(x^6/6*5*4*3*2*1)+(x^8/8*7*6*5*4*3*2*1)-(x^10/10*9*8*7*6*5*4*3*2*1);
	printf("The sum of the given series is = %f ",Sum);
	return 0;

}
