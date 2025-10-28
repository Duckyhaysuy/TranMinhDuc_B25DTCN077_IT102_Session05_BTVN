#include <stdio.h>

int main() {
    int a,b;
    printf("nhap so nguyen a: ");
    scanf("%d",&a);
    printf("nhap so nguyen b: ");
    scanf("%d",&b);
    
    if(a>b){
        printf("so lon hon la: %d",a);
    }else if(a<b){
        printf("so lon hon la: %d",b);
    }else if(a==b){
        printf("hai so bang nhau.");
    }else{
        printf("nhap so khong dung.");
    }
    
    
    return 0;
}
