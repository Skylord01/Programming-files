#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int high,low,i,flag,number;
	printf("Enter the Highest and Lowest number for range:\n");
	scanf("%d %d",&high,&low);
	printf("The prime numbers in the given range are:\n",high,low);
	for(number=low;number<=high;++number)
	{
		flag=0;
		for(i=2;i<=number/2;i++)
		{
			if((number%i)==0){
				flag++;
				break;
			}
		}
			if(flag==0)
			printf("%d\t",number);
			}
			return 0;
		}
	

