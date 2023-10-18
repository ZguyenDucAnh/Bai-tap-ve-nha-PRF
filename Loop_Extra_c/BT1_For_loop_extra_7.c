//
#include <stdio.h>
/*
*
**
***
****
*****
******
*******
******
*****
****
***
**
*
*/
int main(){
	int n=6,i,j,k;
	for(i = 1; i<=n; i++){
		for(j = 1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}	
	for(k=1; k<=n-6; k++){
		printf("*");
	}
	for(i = 1; i<=n+1; i++){
		for(j = i; j<=n+1; j++){
			printf("*");
		}
		
		for(j = i; j<=n+1; j++){
			printf(" ");
		}
		
		printf("\n");
	}
	
	

	
	
	
	
	return 0;
}