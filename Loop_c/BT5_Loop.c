#include <stdio.h>
//BT5
int main(){
	
	float h;
	F:
	printf("Input number of hours: ");
	scanf("%f", &h);
	
	if(h>=1){
		if(h<=4){
			printf("\ncost in %f hours is: %.1f $",h,h*3);
		}else if(h<=7){
			printf("\ncost in %f hours is: %.1f $",h,5*1.5 + 4*1.5*3);
		}else{
			printf("\ncost in %f hours is: %.1f $",h,6*3);
		}
	}else{
		printf("\nError");
		goto F;
	}
	
	
	
	
	
	return 0;
}