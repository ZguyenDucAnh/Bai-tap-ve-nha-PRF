//
#include <stdio.h>
/*
******
*****
****
***
**
*
*/
int main(){
	int n=6,i,j;
	for(i = 1; i<=n; i++){
		for(j = i; j<=n; j++){
			printf("*");
		}
		
		for(j = i; j<=n; j++){
			printf(" ");
		}
		
		printf("\n");
	}
	
	
	return 0;
}
