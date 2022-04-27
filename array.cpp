#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[50],min,max,avg,total=0,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d number of ages:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0]=max;
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
        total=total+a[i];
        
    }
    printf("The min age is:%d",min);
    printf("The max age is:%d",max);
    printf("The average age is:%d",total);
    

return 0;
}
