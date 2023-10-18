/*
Exercise 3: Write a C program uses pointer and dynamic allocate memory to input
integer array from the keyboard. Then do following tasks:
- Display the given array to the screen.
- Calculate total all elements in the array. Display result to the screen.
- Display all square number in the array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
	int n, arr[100],*pa;
	int sum = 0;
	do{
		printf("\nNhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	pa = (int*) malloc(n * sizeof(int));
	
	//Input array
	for(int i = 0; i<n; i++){
		printf("\narr[%d] = ",i); 	scanf("%d",pa+i);
	}
	

	//Display the given array to the screen
	printf("\nDisplay the given array to the screen:\n");
	for(int i = 0; i<n; i++){
		printf("%d ",*(pa+i));
	}
	
	//total all elements in the array
	
	printf("\ntotal all elements in the array:\n");
	
	for(int i = 0; i<n; i++){
		sum += *(pa+i);
	}
	printf("\nSum: %d",sum);
	
	
	//Display all square number in the array.
	printf("\nSquare number in array:\n");
	for(int i = 0; i<n; i++){
		printf("%d ",(int) pow(*(pa+i),2));
	}
	return 0;
}