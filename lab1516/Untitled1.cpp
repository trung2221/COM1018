#include <stdio.h>
#include <string.h>
	
struct Sinhvien{
	char TenSV[40];//ten sinh vien	
	
	char Ho[40];//ho sinh vien
	
	char Lop[40];//lop sinh vien	
	
	char Quequan[40];//que quan sinh vien
	
	char Gioitinh[40];//gioi tinh sinh vien
	
	int tuoi;//tuoi sinh vien
	
	int Masv;//ma sinh vien
	
	//ngay, thang, nam sinh cua sinh vien
	int ngay;
    int thang;
    int nam;
	
};
int main()
{
		//thong tin sv 1
	struct sinhvien sv1 = ("SV01", "Trung","Nguyen", 2004,"Quang Binh","nam","COM1801");
	 printf("Thong tin sinhvien 1: \n");
     printf("Ma SV: %s\n", sv1.maSV);
     printf("Ho va ten: %s %s\n", sv1.ho, sv1.ten);
     printf("Ngay sinh: %d/%d/%d\n", sv1.ngaySinh, sv1.thangSinh, sv1.namSinh);
     printf("Que quan: %s\n", sv1.queQuan);
     printf("Gioi tinh: %s\n", sv1.gioiTinh);
     printf("Ma lop: %s\n", sv1.maLop);
     //thong tin sv 2
	struct sinhvien sv2 = ("SV02", "Duc","Nguyen", 2004,"Quang Tri","nam","IT18307");
	 printf("\nThong tin sinhvien 2: \n");
     printf("Ma SV: %s\n", sv2.maSV);
     printf("Ho va ten: %s %s\n", sv2.ho, sv2.ten);
     printf("Ngay sinh: %d/%d/%d\n", sv2.ngaySinh, sv2.thangSinh, sv2.namSinh);
     printf("Que quan: %s\n", sv2.queQuan);
     printf("Gioi tinh: %s\n", sv2.gioiTinh);
     printf("Ma lop: %s\n", sv2.maLop);
	
		//tao du lieu sinh vien 3 bang cach copy tu sinh vien 1
		struct sinhvien sv3;
		sv3 = sv1;
	
		//chinh sua thong tin sinh vien 3
		sv3.masv = 13;
		strycpy(sv3.ho,"Do");
		strcpy(sv3.ten,"Binh");
		sv3.namsinh = 1989;
		strcpy(sv3.quequan,"Quang Nam");
		Strcpy(sv3.malop,"Web1010");
	    printf("\nThong tin sinhvien 3: \n");
        printf("Ma SV: %s\n", sv3.maSV);
        printf("Ho va ten: %s %s\n", sv3.ho, sv3.ten);
        printf("Ngay sinh: %d/%d/%d\n", sv3.ngaySinh, sv3.thangSinh, sv3.namSinh);
        printf("Que quan: %s\n", sv3.queQuan);
        printf("Gioi tinh: %s\n", sv3.gioiTinh);
        printf("Ma lop: %s\n", sv3.maLop);
		

        
	

	
}
}
