#include <stdio.h>
int main(){
	int i=1,n,num;
	
	while(1){
	
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	
	if(n>0){
	
	num = (n + i) * n / 2;
	
	printf("%d",num);
	break;
}
    else{
    	printf("Vui long nhap lai gia tri la so nguyen duong: \n");
	}
}
	
	
}
