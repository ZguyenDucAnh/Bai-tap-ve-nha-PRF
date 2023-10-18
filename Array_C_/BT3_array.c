#include <stdio.h>
#include <math.h>
//Exercise 3: Write a C program inputs array of integer, display it to the screen. Display
//and calculate total square number in the array. Display result to the screen.
void Input_array_of_integer(){
	int n;
	int arr[100];
	
	printf("Input n: "); 	scanf("%d",&n);
	for(int i = 0; i<n; i++){
		printf("\nInput array of integer arr[%d]: ",i); 	scanf("%d",&arr[i]);
	}
	
	printf("\nOutput array: ");
	for(int i = 0; i<n; i++){
		printf("%5d ",arr[i]);
	}
	
}


void Total_square_number_array(){
	int n;
	int arr[100];
	
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum += pow(arr[i],2);
	}
	
	printf("\nTotal square number array: %d",sum);
}


int main(){
	Input_array_of_integer();
	printf("\n");
	Total_square_number_array();
	
	return 0;
}