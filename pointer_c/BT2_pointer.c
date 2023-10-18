/*
Exercise 2: Write a C program uses pointer and dynamic allocate memory to input float
array from the keyboard. Then do following tasks:
	- Display the given array to the screen.
	- Sort array descending. Display array after sorting to the screen.
	- Calculate average positive and non positive number in the array
*/
//Done
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int size, array[100];
	float *pa;
	do{
		printf("Nhap size: "); 	scanf("%d",&size);
	}while(size<=0);
	
	pa = (float*) malloc(size * sizeof(float));
	
	for(int i = 0; i<size; i++){
		printf("\narr[%d] = ",i);
		scanf("%f",pa+i);
	}
	
	//display array
	printf("\nDisplay float array:\n");
	for(int i = 0; i<size; i++){
		printf("%.1f  ",*(pa+i));
	}	
	
	//Sort array descending
	for(int i = 0; i<size; i++){
		for(int j = i+1; j<size; j++){
			if(*(pa+i) < *(pa+j)){
				float temp = *(pa+i);
				*(pa+i) = *(pa+j);
				*(pa+j) = temp;
			}
		}
	}
	
	//Display Sort array descending
	printf("\nDisplay Sort array descending:\n");
	for(int i = 0; i<size; i++){
		printf("%.1f  ",*(pa+i));
	}
	
	//average positive
	int count_posi = 0;
	float sum = 0.0;
	for(int i = 0; i<size; i++){
		if(*(pa+i) > 0){
			count_posi++;
			sum += *(pa+i);
		}
	}
	
	//display average positive
	printf("\nAverage positive:\n %.1f", (float )sum/count_posi);
	
	//average non positive
	int count_non_posi = 0;
	float sum2 = 0.0;
	for(int i = 0; i<size; i++){
		if(*(pa+i) < 0){
			count_non_posi++;
			sum2 += *(pa+i);
		}
	}
	
	//display average non positive
	printf("\nAverage non positive:\n %.1f", (float )sum2/count_non_posi);
	return 0;
}
