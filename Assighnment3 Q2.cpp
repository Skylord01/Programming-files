#include<stdio.h>
 main()
{
 char character;
 printf("Enter a ASCII value:");
 scanf("%c",&character);
 if(character>=97 && character<=122) 
 {
 	printf("The ASCII value is for a small letter.");
 }
 else if(character>=65 && character<=90)
 {
 	printf("The ASCII value is for a capital letter.");
 }
 else if(character>=48 && character<=57)
 {
 	printf("The ASCII value is for a digit.");
 }
 else{
 	printf("The ASCII value is for a special symbol.");
 }
	return 0;
}
