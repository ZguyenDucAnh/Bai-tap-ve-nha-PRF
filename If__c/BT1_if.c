#include <stdio.h>
int main(){
	printf("\n----------------------------");
	printf("\nConsumer______________________Unit price");
	printf("\n0-100 				600		");
	printf("\n101-150 			900		");
	printf("\n151-200 			1200	");
	printf("\n201-300 			1500	");
	printf("\n>300 				2000	");
	printf("\n----------------------------");
	
	//input consumer: k
	int k;
	printf("\nInput your consumer: "); 	scanf("%d",&k);
	if (0<=k && k <=100){
		printf("Charge: %d",k*600);
	}else if(101<=k && k<=150){
		printf("Charge: %d",k*900);
	}else if(151<=k && k<=200){
		printf("Charge: %d",k*1200);
	}else if(201<=k && 300<=k){
		printf("Charge: %d",k*1500);
	}else if(300<k){
		printf("Charge: %d",k*2000);
	}
	
	
	
	
	return 0;
}