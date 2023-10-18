#include <stdio.h>

void Init_arr(){
	int n;
	float arr[100];
	printf("Nhap n: "); 	scanf("%d",&n); 	
	
	for(int i = 0; i<n; i++){
		printf("\nNhap phan tu thu a[%d]: ",i); 	scanf("%f",&arr[i]);
	}
	printf("\nmang vua nhap la: ");
	for(int i = 0; i<n; i++){
		printf("%.1f\t",arr[i]);	
	}
}

void Display_positive_elements(){
	int n;
	float arr[100];
	printf("\ncac phan tu duong co trong mang la: ");
	for(int i = 0; i<n; i++){
		if(arr[i] >= 1){
			printf("%.1f\t",arr[i]);
		}
	}
}

void total_negative_elements(){
	int n;
	float arr[100];
	float sum = 0.0;
	printf("\ntong cac phan tu am co trong mang la: ");
	for(int i = 0; i<n; i++){
		if(arr[i] < 0){
			sum += arr[i];
		}
	}
	printf("%.1f\t",sum);
	
}

//void  Sort_array_descending(){
//	int n;
//	float arr[100];
//	
//   for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] > arr[j]) {
//                // 
//                float temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        printf("%.1f ", arr[i]);
//    }
//}
//



int main(){
	int n;
	float arr[100];
	Init_arr();
	Display_positive_elements();
	total_negative_elements();
	//Sort_array_descending();
	
	return 0;
}