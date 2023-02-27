#include <stdio.h>
#include <string.h>

struct dob{//ngay, thang, nam sinh cua sinh vien
	
int ngay;
int thang;
int nam;
};
struct Sinhvien{
	char TenSV[40];//ten sinh vien	
	
	char Ho[40];//ho sinh vien
	
	char Lop[40];//lop sinh vien	
	
	char Quequan[40];//que quan sinh vien
	
	char Gioitinh[40];//gioi tinh sinh vien
	
	int tuoi;//tuoi sinh vien
	
	int masv;//ma sinh vien
	
};
int main()
{
	struct sinhvien sv1 = (11, "Trung","Nguyen", 2004,"Quang Binh","nam","COM1801");
	struct sinh vien sv1 = (11, "Duc","Nguyen", 2004,"Quang Tri","nam","IT18307");
	
		//tao du lieu sinh vien 3 bang cach copy tu sinh vien 1
		struct sinhvien sv3;
		sv3 = sv1;
		printf("SV3: %d %s %s %d %s %s\n", sv1.masv,sv1.ho,sv1.tensv,sv1.namsinh,sv1.quequan,sv1.tuoi,sv1.gioitinh);
	
		//chinh sua thong tin sinh vien 3
		sv3.masv = 13;
		strycpy(sv3.ho,"Do");
		strcpy(sv3.ten,"Binh");
		sv3.namsinh = 1989;
		strcpy(sv3.quequan,"Quang Nam");
		Strcpy(sv3.malop,"Web1010")
	

	
}
}
