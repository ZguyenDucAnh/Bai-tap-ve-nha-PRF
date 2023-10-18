//BT3
#include <stdio.h>
int main(){
	printf("Input: \n");
	int Fnumber, Snumber, Tnumber; 
	printf("Nhap first number: "); scanf("%d", &Fnumber);
	printf("Nhap second number: "); scanf("%d", &Snumber);
	printf("Nhap third number: "); scanf("%d", &Tnumber);
	
	int c = Fnumber;
	Fnumber = Tnumber;
	Tnumber = c;
	printf("Output: ");
	printf("\nfirst number: %d",Fnumber); 
	printf("\nsecond number: %d", Snumber);
	printf("\nthird number: %d", Tnumber); 	
	
	return 0;
}