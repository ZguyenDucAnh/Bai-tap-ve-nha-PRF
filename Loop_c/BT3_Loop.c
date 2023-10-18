#include<stdio.h>
#include <stdbool.h>

/*
Write a C program inputs positive integer n, display to the screen all perfect
number from 1 to n
*/

bool check(int n){
	int sum = 0;//khai bao bien sum
	for(int i=1;i<=n/2;i++){
		if(n%i==0) 
			sum+=i;
			printf("%d ",i);
	}
	if(sum==n) return true; // tra ve true
	return false;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(check(n) )
		printf("\n%d la so hoan hao.",n);
	else
		printf("\n%d khong phai la so hoan hao.",n);
	return 0;
}