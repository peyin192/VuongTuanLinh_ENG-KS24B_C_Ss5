#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong thu hai: ");
    scanf("%d", &b);
    do{
        if(a>b){
            a -= b;
        }
        if(a>b){
            a -= b;
        }
    }while(a!=b);
    printf("uoc chung lon nhat cua 2 so la: %d\n", a);
    return 0;
}
