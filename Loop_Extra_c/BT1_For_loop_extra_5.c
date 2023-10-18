#include <stdio.h>
/*
******
 *****
  ****
   ***
    **
     *
*/

int main()
{
    int n =6;
    int i;
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