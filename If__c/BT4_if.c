//BT4
/*

- If a = 0 and b = 0 and c = 0 then equation has uncountable root.
- if a = 0 and b = 0 and c <> 0 then equation has no root.
- if a<>0, calculate delta, and so on.

*/
#include <stdio.h>
int main(){
	float a,b,c;
	printf("Nhap lan luot 3 so a,b,c: "); 	scanf("%d%d%d",&a,&b,&c);
	if (a==0 && b == 0 && c == 0){
		printf("pt co vo so nghiem");
	}
	if(a == 0 && b == 0 && c != 0){
		printf("pt ko co nghiem");
	}else{
		if(a != 0){
			printf("delta: %d",b*b-4*a*c);
		}
	}
		
	
	
	
	return 0;
}