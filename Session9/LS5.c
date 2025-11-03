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
	
	int count_chan = 0,count_le = 0;
	printf("\nCac phan tu chan: ");
	for(int i = 0;i < n;i++){
		if(arr[i] % 2 == 0){
			printf("%2d",arr[i]);
			count_chan++;
		}
	}
	
	printf("\nCac phan tu le: ");
	for(int i = 0;i < n;i++){
		if(arr[i] % 2 != 0){
			printf("%2d",arr[i]);
			count_le++;
		}
	}
	
	printf("\n\nTong so phan tu chan = %d",count_chan);
	printf("\nTong so phan tu le = %d",count_le);
	
	return 0;
}
