//pointer workshop
/*
-Display the given array to the screen.
- Sort array ascending. Display array after sorting to the screen.
- Display all prime numbers in the array to the screen.

*/
//Done
#include <stdio.h>
#include <stdlib.h>
// Function to check if a number is prime
int isPrime(int number) {
  if (number <= 1) {
    return 0;
  }

  for (int i = 2; i * i <= number; i++) {
    if (number % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main(){
	int n, arr[100], *pa;
	do{
		printf("\nNhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	pa = (int*) malloc(n*sizeof(int));
	//input arrayint
	for(int i = 0; i<n; i++){
		printf("\nNhap arr[%d]: ",i);
		scanf("%d",pa+i);
	}
	//display array
	printf("\ndisplay array:\n");
	for(int i = 0; i<n; i++){
		printf("%d ", *(pa+i));
	}	
	
	//sort array ascending -__ tang dan
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(*(pa+i) > *(pa+j)){
				int temp = *(pa+i);
				*(pa+i) = *(pa+j);
				*(pa+j) = temp;	
			}

		}
	}
	printf("\nsort array ascending: \n");
	for(int i = 0; i<n; i++){
		printf("%d ", *(pa+i));
	}
	
	//prime number in array 
	printf("\nprime number in array:\n ");
	
  	//printf("The prime numbers in the array are: ");
  	for (int i = 0; i < n; i++) {
   		if (isPrime(*(pa+i))) {
      		printf("%d ", *(pa+i));
    	}
  	}
  	printf("\nFinish!");

	return 0;
}