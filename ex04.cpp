#include <stdio.h>
int main(){
	int num,n=1,val;
	
	do{
	
	printf("Nhap so nguyen duong tu 1 den 10: ");
	scanf("%d",&num);
}while(num<0||num>10);
    
    for(int n=1;n<=10;n++){
    	
    	val = num * n;
    	
    	printf("%d x %d = %d\n",num,n,val);
	}
    
}


    
	

	

