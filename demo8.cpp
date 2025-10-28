#include <stdio.h>

int main() {
    int x;
    float sum = 0;
    printf("Nhap so met khoi nuoc tieu thu trong thang: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("So met khoi khong hop le.\n");
        return 0;
    } else if (x <= 10) {
        sum = x * 6000;
    } else if (x <= 20) {
        sum = 10 * 6000 + (x - 10) * 7000;
    } else if (x <= 30) {
        sum = 10 * 6000 + 10 * 7000 + (x - 20) * 8500;
    } else { 
        sum = 10 * 6000 + 10 * 7000 + 10 * 8500 + (x - 30) * 10000;
    }

    printf("Tong so tien phai tra: %.f VND\n", sum);
    return 0;
}

