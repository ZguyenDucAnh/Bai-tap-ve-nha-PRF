//BT4
/*
Write a C program produces menu like that:
\n1. Enter two integers
\n2. Calculate sum of two given integers
\n3. Calculate subtraction of two given integers
\n4. Calculate multiply of two given integers
\n5. Calculate division of two given integers
\n6. Exit
Enter your choice:
*/
#include <stdio.h>
#include <math.h>
void menu_(){
	printf("menu:");
	printf("\n1. Enter two integers\n2. Calculate sum of two given integers\n3. Calculate subtraction of two given integers");   
	printf("\n4. Calculate multiply of two given integers\n5. Calculate division of two given integers\n6. Exit");
	
}


int main(){
	float nb1,nb2;
	int choice;
	
	menu_();
	printf("\nEnter your choice: "); 
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nnb1: "); scanf("%f",&nb1);
			printf("\nnb2: "); scanf("%f",&nb2);
			printf("%.f va %.f",nb1,nb2);
			break;
		case 2:
			printf("\nnb1: "); scanf("%f",&nb1);
			printf("\nnb2: "); scanf("%f",&nb2);
			printf("%.f + %.f = %.f",nb1,nb2,nb1+nb2);
			break;
		case 3:
			printf("\nnb1: "); scanf("%f",&nb1);
			printf("\nnb2: "); scanf("%f",&nb2);
			printf("%.f - %.f = %f",nb1,nb2,nb1-nb2);
			break;
		case 4:
			printf("\nnb1: "); scanf("%f",&nb1);
			printf("\nnb2: "); scanf("%f",&nb2);
			printf("%.f * %.f = %.f",nb1,nb2,nb1*nb2);
			break;
		case 5:
			printf("\nnb1: "); scanf("%f",&nb1);
			printf("\nnb2: "); scanf("%f",&nb2);
			printf("%.f / %.f = %.2f",nb1,nb2,(float) nb1/nb2);
			break;
		case 6:
			printf("Exit.");
			break;
		default:
			printf("Error");
			break;	
	}
	
	
	
	
	
	
	
	
	
	return 0;
}