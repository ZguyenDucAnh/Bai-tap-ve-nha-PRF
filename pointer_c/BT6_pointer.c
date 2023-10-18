/*
Exercise 6: Write a C program uses pointer to inputs exam score range from 1 to 100 of
40 students from the keyboard and store in the array. The program should count and print
the number of outstanding scores (90-100), the number of high average scores (70-89),
the number of satisfactory scores (50-69), and the number of unsatisfactory scores (1-49)
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, count[4] = {0, 0, 0, 0}, *p;
    p = (int*) malloc(n*sizeof(int));
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the exam scores of %d students: \n", n);
    for (i = 0; i < n; i++) {
    	printf("Hoc sinh thu %d: ",i+1);
        scanf("%d", &a[i]);
        if (a[i] >= 90 && a[i] <= 100) {
            count[0]++;
        } else if (a[i] >= 70 && a[i] <= 89) {
            count[1]++;
        } else if (a[i] >= 50 && a[i] <= 69) {
            count[2]++;
        } else if (a[i] >= 1 && a[i] <= 49) {
            count[3]++;
        }
    }
    p = count;
    printf("Number of outstanding(60-100) scores: %d\n", *(p + 0));
    printf("Number of high average(70-89) scores: %d\n", *(p + 1));
    printf("Number of satisfactory(50-69) scores: %d\n", *(p + 2));
    printf("Number of unsatisfactory(1-49) scores: %d\n", *(p + 3));
    return 0;
}
