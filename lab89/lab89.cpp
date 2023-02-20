#include <stdio.h>
#include <math.h>
int main(){

	float a,b,c, denta;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	
	if (a==0)
	{
		printf("\nPhuong trinh thanh bx+c=0");
	}else
	{ denta=(b*b)-4*a*c;
	if(denta>0){
	
	     x1=(-b-sqrt(denta))/(2*a);
		 x2=(-b+sqrt(denta))/(2*a);
		}
	else if(denta<0)
		{printf("\nPhuong trinh vo nghiem");
		}
	else if(denta==0)
		{printf("\nPhuong trinh co nghiem kep x=-b/(2*a)");
		}
	}
		
return 0;
}

