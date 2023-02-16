#include <stdio.h>
int main (){
	int n;
	printf("nhap n > 0: ");
	scanf("%f", &n);
	if(n<=0){
		printf("nhap n>0\n");
	}else{
		int i;
		// in ra so chan :
		printf("cac so chan: \n");
		for(i=0;i<n;i<=2){
			printf("%d", i);
		}
		printf("\n\n");
		// in ra so le ; 
		printf("cac so le: \n");
		for(i=1;i<n;i<=2){
			printf("%d,",i);
		}
	}
	return 0;
}
