#include<stdio.h>
//BT1. Giam dan
int main() {
    int n;
    float arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%.1f\t ", arr[i]);
    }
    return 0;
}
