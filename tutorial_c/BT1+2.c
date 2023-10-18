/*
BT1.
a)
	y = (x**x - 5)/(x**x + 1)
	
b)
	T = 2*Pi*sqrt(k/m)

*/

//BT2
//Library
#include <stdio.h>
//pi
#define PI 3.14
int main(){
	float R;
	printf("Input radius: ");
	scanf("%f", &R);
	printf("\nArea: ", (R*R)*PI);
	printf("\nPeremeter: ", 2*R*PI);
	return 0;
}


