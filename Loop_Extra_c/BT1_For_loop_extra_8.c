#include <stdio.h>
/*

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
*/
int main(){
	int n=10,i,j,k;
	for(int i = 0; i<n; i++){
		for(int j = i; j<n; j++){
			printf(" ");
		}
		
		for(int j = n-i; j<n; j++){
			printf("*");
		}
		
		printf("\n");	
	}
	
    for(i = 0; i < n; i++){
        int j;
       //
        for(j = n-i; j < n; j++){
            printf(" ");
        }
        for(j = i; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
	
	

	
	
	
	
	return 0;
}