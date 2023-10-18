//BT6.
/*
Input:
	number of days,
	hours,
	minutes,
	and seconds.
Output:
	Total number of seconds:
	Total = number of days * 

*/
#include <stdio.h>
int main(){
	//init
	int days, hours, minutes, seconds;
	//number of days
	printf("number of days: "); scanf("%d", &days);
	//hours
	printf("hours: "); scanf("%d", &hours);
	//minutes
	printf("minutes: "); scanf("%d", &minutes);
	//seconds
	printf("second: "); scanf("%d", &seconds);
	// a seconds of number of days
	int a = days * 24 * 60 *60;
	// b seconds of hours
	int b = hours * 60 * 60;
	// c seconds of minutes
	int c = minutes * 60;
	
	
	int Total = a + b + c + seconds;
	printf("Total seconds: %d", Total);
	
	
	
	
	
	return 0;
}