#include<stdio.h>
int main(){
	int n;
	
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	
	int arr[n],sum = 0;
	for(int i = 0;i < n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	int find;
	printf("\nNhap gia tri can tim: ");
	scanf("%d",&find);
	
	int flag = 0;
	for(int i = 0;i < n;i++){
		if(find == arr[i]){
			flag = 1;
			break;
		} 
	}
	
	if(flag = 1){
		printf("Phan tu co xuat hien trong mang!!");
	} else {
		printf("Phan tu khong xuat hien trong mang!!");
	}
		
	return 0; 
}
