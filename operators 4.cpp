#include<stdio.h>
int main()
{
	float inches,feet,meter,weight,kg,height;
	printf("Enter your height in feet and inches:\n");
	scanf("%ffeet %finches",&feet,&inches);
	printf("Enter your weight in Kg:\n");
	scanf("%f kg",&weight);
	height= (feet*12)+inches;
	printf("The height in inches is:%.2f\n",height);
	
	
	
	
	
	return 0;
}
