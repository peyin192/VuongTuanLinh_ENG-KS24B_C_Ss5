#include <stdio.h>
int main(){
	int add,num1,num2,num3,n,bnumber,snumber;
	float average;
	
	while(1){
		printf("1. Nhap 3 so\n");
		printf("2. Tong 3 so\n");
		printf("3. Trung binh cong 3 so\n");
		printf("4. So nho nhat\n");
		printf("5. So lon nhat\n");
		printf("6. Thoat\n");
		
		if(n==6){
	    	printf("Dung chuong trinh");
	    	break;
		}
		
		
		printf("Moi ban chon yeu cau: ");
	    scanf("%d",&n);
	    
	    if(n==1){
	    	continue;
		}
	    
	    
	    add = num1 + num2 + num3;
	    average = (num1 + num2 + num3) / 3;
	    if(num1>num2&&num2>num3){
	    	bnumber = num1;
	    	snumber = num3;
		}
		else if(num1>num3&num3>num2){
			bnumber = num1;
			snumber = num2;
		}
		else if(num2>num1&&num1>num3){
			bnumber = num2;
			snumber = num3;
		}
		else if(num2>num3&&num3>num1){
			bnumber = num2;
			snumber = num1;
		}
		else if(num3>num1&&num1>num2){
			bnumber = num3;
			snumber = num2;
		}
		else if(num3>num2&&num2>num1){
			bnumber = num3;
			snumber = num1;
		}
		else{
			
		}
	    
	    
	    
		
		switch(n){
		
		case 1:
			printf("Nhap 3 so: ");
			scanf("%d %d %d",num1,num2,num3);
			break;
		
		case 2:
			printf("Tong 3 so la %d\n",add);
			break;
		
		case 3:
			printf("Trung binh cong 3 so la %.2f\n",average);
			break;
		
		case 4:
			
			
			printf("So lon nhat la %d\n",bnumber);
		
		break;
		case 5:
			printf("So nho nhat la %d\n",snumber);
			
			
		default:
			printf("Hay chon lai\n");
		
			
		}
	}
}
