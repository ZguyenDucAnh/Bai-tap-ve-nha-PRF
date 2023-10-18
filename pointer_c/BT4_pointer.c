/*
Exercise 4: Write a C program uses pointer and dynamic allocate memory to input
integer array from keyboard. Then do following tasks;
	- Display the given array to the screen.
	- Count perfect number in the array. Display result to the screen.
	- Find max even and min odd number in the array. Display result to the screen.
	- Hint: To find max even and min odd number you should assign max even = -32768,
	min odd = 32767.
*/
#include <stdio.h>
#include <stdlib.h>
int is_perfect(int num) {
    int sum = 0, i;
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n, i, *arr, count = 0, max_even = -32768, min_odd = 32767;

	do{
	    printf("Input n: ");
    	scanf("%d", &n);
	}while(n<=0);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    //Nhap mang, ktra tinh chan le, dem so luong so hoan hao
    for (i = 0; i < n; ++i) {
    	printf("\nInput arr[%d] = ",i);
        scanf("%d", arr + i);
        if (*(arr + i) % 2 == 0 && *(arr + i) > max_even) {
            max_even = *(arr + i);
        }
        if (*(arr + i) % 2 != 0 && *(arr + i) < min_odd) {
            min_odd = *(arr + i);
        }
        if (is_perfect(*(arr + i))) {
            count++;
        }
    }

    printf("\nThe given array is: \n");
    for (i = 0; i < n; ++i) {
        printf("%d ", *(arr + i));
    }
	// So luong so hoan hao co trong mang
    printf("\n count number of perfect numbers in the array: %d\n", count);
    //So lon nhat chan
    printf("\nMaximum even number in the array: %d\n", max_even);
    // So nho nhat le
	printf("\nMinimum odd number in the array: %d\n", min_odd);

    free(arr);
    return 0;
}


