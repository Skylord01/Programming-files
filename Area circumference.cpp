#include<stdio.h>
int main()
{
	int r;
	float A,V;
	printf("Enter the radius of circle:\n");
	scanf("%d",&r);
	A=4*3.14*r*r;
	printf("The Area of sphere is= %f",A);
	V= (4/3)*3.14*r*r*r;
	printf("The volume of sphere is = %f",V);
	return 0;
}
