#include <stdio.h>

int main() {
    float x, sum;
    printf("So Tien : ");
    scanf("%f", &x);

    if (x > 0 && x <= 5) {
        sum = x * 0.05;
    } else if (x > 5 && x <= 10) {
        sum = x * 0.10;
    } else if (x > 10) {
        sum = x * 0.15;
    } else {
        printf("So tien khong hop le.");
        return 0;
    }

    printf("Thue thu nhap phai dong : %.2f", sum);
    return 0;
}

