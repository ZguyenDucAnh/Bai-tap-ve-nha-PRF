//BT3
/*

Input:
	a number, 
	a choice.
Output:
	A -> a number * 10
	B -> a number * 100
	C -> a number * 1000

*/
#include <stdio.h>
#include <string.h>
int main(){
	printf("A. number * 10");
	printf("\nB. number * 100");
	printf("\nC. number * 1000");	
	float number;
	char c;
	//Input
	printf("\nInput:");
	//choice
	printf("\nnhap ki tu A,B or C: "); 	scanf("%c", &c);
	//number
	printf("\nnumber: "); 	scanf("%d", &number);
	//Output
	printf("\nOutput: ");
	printf("\n");
	switch(c){
		case 'A':
			printf("result: %f",number*10);
			break;
		case 'B':
			printf("result: %f",number*100);
			break;
		case 'C':
			printf("result: %f",number*1000);
			break;
		default:
			printf("Error!!");
			break;
	}
	
	
	return 0;
}