#include <stdio.h>
int main(){
	int add,minus,num1,num2,n;
	float multi,divide;
	
	printf("Nhap vao 2 so\n");
	
	printf("So thu nhat: ");
	scanf("%d",&num1);
	
    printf("So thu hai: ");
	scanf("%d",&num2);
	
	add = num1 + num2;
	minus = num1 - num2;
	multi = num1 * num2;
	divide = num1 / num2;
	
	while(1){
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n");
		
		printf("Moi ban chon yeu cau: ");
	    scanf("%d",&n);
	    
	    if(n==5){
	    	printf("Dung chuong trinh");
	    	break;
		}
		
		switch(n){
		
		case 1:
			printf("Tong 2 so la %d\n",add);
			break;
		
		case 2:
			printf("Hieu 2 so la %d\n",minus);
			break;
		
		case 3:
			printf("Tich 2 so la %.2f\n",multi);
			break;
		
		case 4:
			
			
			printf("Thuong 2 so la %.4f\n",divide);
		
		break;
			
			
		default:
			printf("Hay chon lai\n");
		
			
		}
	}
}
