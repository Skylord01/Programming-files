#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	printf("Enter the number of day : \n");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("The day is Sunday. \n");
			break;
		case 2:
		    printf("The day is monday. \n");
		    break;
		case 3:
		    printf("The day is Tuesday. \n");
		    break;
		case 4:
		    printf("The day is Wednersday. \n");
		    break;
		case 5:
		    printf("The day is Thursday. \n");
		    break;
		case 6:
		    printf("The day is Friday. \n");
		    break;
		case 7:
		    printf("The day is Saturday. \n");
		    break;
		default:
			printf("Invalid option given");
			
	}
	return 0;
}	

