#include <stdio.h>
#include <math.h>
void menu(){
 	printf("---------------Menu-----------------\n"); 
 	printf("1.Kiem tra so nguyen \n"); 
 	printf("2.Tim uoc chung va boi chung cua 2 so \n");
 	printf("3.Chuong trinh tinh tien cho quan karaoke \n");
	printf("4.Tinh tien dien \n");
	printf("5.Chuc nang doi ten \n"); 
 } 
	void kiemtrasonguyen(){
	float x;
	printf("Moi ban nhap mot so bat ky:");
	scanf("%f",&x);
	if(x == (int)x){
		printf("%f la so nguyen.\n",x);
	}
	else 
		printf("%f khong phai la so nguyen.\n",x);
}
 void tim_uoc_chung_va_boi_so_chung_cua_2_so() {
 	int x,y;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
	for(int i=x;i>0;i--){
		if(x%i==0 && y%i==0){
			printf("uoc chung lon nhat la %d",i); 
			break; 
		}
	}
	for(int i=x;i=x*y;i++){
		if(i%x==0 && i%y==0){
			printf("\nboi chung nho nhat la %d\n",i); 
			break; 
		}
	}
 } 
 int karaoke()
{
    int start_hour, end_hour;
    float price = 0.0;

    printf("Nhap gio bat dau: ");
    scanf("%d", &start_hour);

    printf("Nhap gio ket thuc: ");
    scanf("%d", &end_hour);

    if (start_hour < 12 || end_hour > 23 || start_hour >= end_hour)
    {
        printf("Thoi gian khong hop le.\n");
        return 0;
    }

    int hours = end_hour - start_hour;
    if (hours <= 3)
    {
        price = hours * 50000.0;
    }
    else
    {
        price = 3 * 50000.0 + (hours - 3) * 35000.0;
    }

    if (start_hour >= 16 && start_hour < 19)
    {
        price = price * 0.9;
    }
    else if (hours > 3)
    {
        price = price * 0.7;
    }

    // In ra giá ti?n c?n thanh toán
    printf("Gia tien can thanh toan: %.0f\n", price);
}

void laisuattragop(){
	double tienmuonvay;
	printf("Nhap so tien muon vay:");
	scanf("%lf",&tienmuonvay);
	double tongtien;
	int han=12;
	double lai=0.05;
	double tienlaimoithang;
	double tiengocmoithang = tienmuonvay/han;
	double tongtienmoithang;
	int i;
	for (i=1;i<han;i++){
		tienlaimoithang = tienmuonvay * lai;
		tongtienmoithang = tienlaimoithang + tiengocmoithang;
		tongtien += tongtienmoithang;
		tienmuonvay = tienmuonvay - tiengocmoithang;
		printf("So tien can tra trong thang %d:",i);
		printf("lai%.0lf\tgoc%.0lf\tphai tra%.0lf\tcon%.0lf\n",tienlaimoithang,tiengocmoithang,tongtienmoithang,tienmuonvay);
	}
	printf("Tong tien phai tra sau 12 thang la:%.2lf vnd\n",tongtien);
}
        case 1:
            printf("Ban da chon chuc nang kiem tra so nguyen\n");
            kiemTraSoNguyen();
            break;
        case 2:
            printf("Ban da chon chuc nang tim uoc chung va boi chung\n");
            uocChungBoiChung();
            break;
        case 3:
            printf("Ban da chon chuc nang tinh tien cho karaoke\n");
            karaoke();
            break;
        case 4:
            printf("Ban da chon chuc nang tinh tien dien\n");
            tinhTienDien();
            break;
        case 5:
            printf("Ban da chon chuc nang doi tien\n");
            doiTien();
            break;
        case 0:
            printf("Good bye, see you again");
            break;
        default:
            printf("Nhap sai !...Yeu cau nhap lai");
            break;
        }
	}
	return 0
}


