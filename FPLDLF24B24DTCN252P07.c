/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 07
*/
#include<stdio.h>
void TotalEven(int arr[],int Length){
	int Tong = 0;
	for (int i = 0;i < Length;i++){
		if(arr[i] % 2 == 0){
			Tong += arr[i];
		}
	}
	printf("Tong cac so chan trong mang la: %d",Tong);
}

int main(){
	int n;
	printf("Hay nhap so phan tu cua mang: ");
	scanf("%d",&n);
	if(n < 1){
		printf("So phan tu khong hop le");
	}
	else{
		int arr[n];
		for (int i = 0;i < n;i++){
			printf("Phan tu thu %d: ",i + 1);
			scanf("%d",&arr[i]);
		}
		TotalEven(arr,n);
	}
	
	return 0;
}
