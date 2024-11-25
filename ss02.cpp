#include <stdio.h>
int main(){
	int i;
	while(1){
		printf("Nhap so nguyen: ");
		scanf("%d",&i);
		
		if(i == 5){
			goto end;
		}
		else{
			printf("Nhap lai\n");
		}
		
	}
	end:
		return 0;
		
}

