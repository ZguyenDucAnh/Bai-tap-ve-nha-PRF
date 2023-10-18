//BT1
/*
 Write a C program inputs integer n so that n greater than or equal 10 and
less than or equal 20. Display to the screen the rectangle of stars base on given n
draw *

*/
#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i = 1; i<=n; i++){
		for(j = 1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	
	return 0;
}