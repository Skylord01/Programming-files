#include<stdio.h>
int main()
{
	int sec,min,hour,Min,Hour,Sec;
	printf("Enter the value in Sec:\n");
	scanf("%d",&sec);
	Hour=sec/(60*60);
	Min=sec/60;
	Sec=sec%60;
	printf("Hour =%d,Min =%d,Sec=%d",Hour,Min,Sec);
	return 0;
}
