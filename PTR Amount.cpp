#include<stdio.h>
int main()
{ 
float P,V,m,T;
printf("Enter the given Pressure(P):\n");
scanf("%f",&P);
printf("Enter the given Volume(V):\n");
scanf("%f",&V);
printf("Enter the given Temperature(T):\n");
scanf("%f",&T);
m=(P*V)/(0.37*(T+460));
printf("The mass of air in automobile(m)= %f",m);
return 0;
}
