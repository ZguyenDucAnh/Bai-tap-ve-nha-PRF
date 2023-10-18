//BT5
#include <stdio.h>
int main(){
	int m; //Mark
	scanf("%d", &m);
	if(90<=m && m<=100){
		printf("A");
	}
	if(80<=m && m<=89){
		printf("B");
	}
	if(70<=m && m<=79){
		printf("C");
	}
	if(60<=m && m<=69){
		printf("D");
	}
	if(m<=59){
		printf("F");
	}
	
	
	return 0;
}