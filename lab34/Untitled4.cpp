#include<stdio.h>

int main(){
	char x[30];
	printf("nhap ten sinh vien:");
	gets(x);	
	float diem;
	printf("Nhap vao diem:");
	scanf("%f",&diem);
		
	if(diem >= 9){
		printf("Diem %.1f - Xep loai: A",diem);
	}else if(diem >= 7){
		printf("Diem %.1f - Xep loai: B",diem);
	}else if(diem >= 5){
		printf("Diem %.1f - Xep loai: c",diem);
	}else if(diem <= 5){
		printf("Diem %.1f - Xep loai: D ",diem);
	}
	return 0;
}

