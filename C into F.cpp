#include<stdio.h>
int main()
{
	float P,T,R,I,A;
	printf("Enter the Principle(P):\n");
	scanf("%f",&P);
	printf("Enter the Time(T):\n");
	scanf("%f",&T);
	printf("Enter the Interest Rate(R):\n");
	scanf("%f",&R);
	I= (P*T*R)/100;
	printf("The total Interest(I) is = %f \n",I);
	A=P+I;
	printf("The Total Amount(A) is = %f",A);
	return 0;
}
