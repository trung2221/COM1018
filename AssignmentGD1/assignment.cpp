#include <stdio.h>
#include <math.h>
int main(){
	printf("\t++-----------MENU----------++\n");
	printf("\n 1.kiem tra so nguyen");
	printf("\n 2.tim uoc so chung va boi so chung cua 2 so");
	printf("\n 3.tinh tien cho quan karaoke");
	printf("\n 4.tinh tien dien");
	printf("\n 5.chuc nang doi tien");
	printf("\n 6.tinh lai vay ngan hang tra gop");
	printf("\n 7.vay tien mua xe");
	printf("\n 8.sap xep thong tin sinh vien");
	printf("\n 9.Game FPOLY-LOTT (2/15)");
	printf("\n 10.tinh toan phan so");
	printf("\n 11.thoat");
	printf("\t++---------------------++\n");
	int chon;
	printf("\nChon mot chuc nang: "); scanf("%d",&chon);
	switch(chon){
		 case 1:
        printf("Thuc hien chuc nang kiem tra so nguyen\n");
        break;
    case 2:
        printf("Thuc hien chuc nang tim uoc so chung va boi so chung cua 2 so\n");
        break;
    case 3:
        printf("Thuc hien chuc nang tinh tien cho quan Karaoke\n");
        break;
    case 4:
        printf("Thuc hien chuc nang tinh tien dien\n");
        break;
    case 5:
        printf("Thuc hien chuc nang doi tien\n");
        break;
    case 6:
        printf("Thuc hien chuc nang tinh lai suat vay ngan hang tra gop\n");
        break;
    case 7:
        printf("Thuc hien chuc nang vay tien mua xe\n");
        break;
    case 8:
        printf("Thuc hien chuc nang sap xep thong tin sinh vien\n");
        break;
    case 9:
        printf("Thuc hien chuc nang game Fpoly-LOTT");
        break;
    case 10:
        printf("Thuc hien chuc nang tinh toan phan so\n");
        break;
    case 11:
        printf("Hien gap lai");
        break;
    default:
        printf("Nhap sai !---Yeu cau nhap lai");
        break;
	}
return 0;
}
