#include <stdio.h>

int main() {
    int a,b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    
    if(a==0 && b==0){
        printf("Phuong trinh co vo so nghiem.");
    }else if(a==0 && b!=0){
        printf("Phuong trinh vo nghiem.");
    }else if(a!=0){
        float x = (float)-b/a;
        printf("Phuong trinh co nghiem duy nhat la: %.2f",x);
    }

    return 0;
}
