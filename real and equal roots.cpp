#include<stdio.h>
int main()
{
	int Kg,gm,Gm;
	printf("Enter the weight in Gram(gm):\n");
	scanf("%d",&gm);
	
	if (gm>=1000){
	Kg=gm/1000,Gm=gm%1000;
	printf("%d Kilogram %d Gram\n",Kg,Gm);
}

	return 0;
	
}
