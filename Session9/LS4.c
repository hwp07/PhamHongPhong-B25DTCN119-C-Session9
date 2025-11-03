#include<stdio.h>
int main(){
	int n;
	
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	
	int arr[n],sum = 0;
	for(int i = 0;i < n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	
	float avr = (float)sum / n;	
	printf("Gia tri trung binh: %.2f", avr);
	
	return 0;
}
