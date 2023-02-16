#include<stdio.h>
int main(){
	int x = 0;
	while ( x<10 ){
	printf("%d",x);
	x=x+1;
	if (x%4==0);{
	break;
	}		
	}
	printf("%d",x);
}
