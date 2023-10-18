#include <stdio.h>
//using namespace std;
/*
       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
*/
int main(){
	int n = 6;
	for(int i = 0; i<=n; i++){
		for(int j = i; j<=n; j++){
			printf(" ");
		}
		
		for(int j = n-i; j<=n; j++){
			printf("* ");
		}
		
		printf("\n");
		
		
	}
		
	
	return 0;
}