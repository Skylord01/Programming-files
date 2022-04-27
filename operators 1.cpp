#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2;
	double d;
	printf("Enter the value of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	
	d=b*b-4*a*c;
	
	  x1= -b + sqrt(d)/(2*a);
	  x2= -b - sqrt(d)/(2*a);
	  printf("The real roots =%.lf %.lf",x1,x2);

return 0;
}
