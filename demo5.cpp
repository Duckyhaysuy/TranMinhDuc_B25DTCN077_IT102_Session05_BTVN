#include <stdio.h>

int main() {
    int x,sum;
    printf("Nhap tuoi: ");
    scanf("%d", &x);


    if(x>0 && x<6){
        sum = 20000*0;
        printf("So tien phai tra: %d VND",sum);
    }else if(x>=6 && x<18){
        sum = 20000*0.5;
        printf("So tien phai tra: %d VND",sum);
    }else if(x>=18& x<60){
        sum = 20000*1;
        printf("So tien phai tra: %d VND",sum);
    }else if(x>=60){
        sum = 20000*0.7;
        printf("So tien phai tra: %d VND",sum);
    }else{
        printf("So tuoi khong hop le.");
    }
    
   return 0;
   }

