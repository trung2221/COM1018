#include <stdio.h>

int main(){
	float a,b,tong,hieu,tich,thuong;
	
	printf("nhap a =");
	scanf("%f", &a);
	
	printf("nhap b =");
	scanf("%f", &b);
	tong = a + b;
	hieu= a - b;
	tich= a * b;
	hieu= a / b;
	printf("tong = %f", tong);
	printf("hieu = %f", hieu);
	printf("tich = %f", tich);
	printf("thuong = %f", thuong);

	
}
