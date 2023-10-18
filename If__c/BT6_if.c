//BT6
#include <stdio.h>

int main(){
	int a,b,c,max,min;
	printf("number 1: "); 	scanf("%d",&a);
	printf("number 2: "); 	scanf("%d",&b);
	printf("number 3: "); 	scanf("%d",&c);
	if(a>=b && a>=c){
		max = a;
	}else if(b>=a && b>=c){
		max = b;
	}else{
		max = c;
	}
	
	if(a<=b && a<=c){
		min = a;
	}else if(b<=a && b<=c){
		min = b;
	}else{
		min = c;
	}	
	
	printf("max: %d \t min: %d",max,min);
	
	return 0;
}