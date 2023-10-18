/*
BT4.
Input:
	tien goc P
	lai suat R%/nam
	khoang thoi gian T nam
Output:
	M = P(1 + RT/100)/(12T)
*/
#include <stdio.h>
int main(){
	float P, R, T;
	
	printf("Input: \n");
	printf("P (principal): "); scanf("%f", &P);
	printf("R (rate): "); scanf("%f", &R);
	printf("T (year): "); scanf("%f", &T);
	float M;
	M = (P*(1 + (R*T)/100))/(12*T);
	printf("M = %f", M);
	
	
	
	return 0;
}



