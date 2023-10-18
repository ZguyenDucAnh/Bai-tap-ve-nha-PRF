#include <stdio.h>
int main(){
	printf("\n----------------------------");
	printf("\nDistance_________________________Cost");
	printf("\n0-99 				5.00		");
	printf("\n100-299 			8.00		");
	printf("\n300-599 			10.00	");
	printf("\n600-999 			12.00	");
	//printf("\n>300 				2000	");
	printf("\n----------------------------");
	
	//input consumer: k
	int k;
	float z;
	
	printf("\nInput your distance: "); 	scanf("%d",&k);
	z =  (float) k/100;
	
	if(z>=0 && z<=99){
		printf("5.00");
	}else if(z>=100 && z<=299){
		printf("8.00");
	}else if(z>=300 && z<=599){
		printf("10.00");
	}else{
		printf("12.00");
	}
	
	
	
	return 0;
}