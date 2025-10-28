#include <stdio.h>

int main() {
    float a;
    printf("Nhap so a: ");
    scanf("%f", &a);
    
    if(a >= 8 && a <= 10){
        printf("Hoc luc gioi.");
    }else if(a >= 6.5 && a < 8){
        printf("Hoc luc kha.");
    }else if(a >= 5 && a < 6.5){
        printf("Hoc luc trung binh.");
    }else{
        printf("Hoc luc yeu.");
    }

    return 0;
}

