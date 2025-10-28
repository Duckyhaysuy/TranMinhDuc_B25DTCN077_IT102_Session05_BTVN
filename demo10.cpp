#include <stdio.h>

int main() {
    int kwh, loai;
    float tien, phuPhi;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &kwh);
    printf("Nhap loai he tiêu dùng (1: He gia dình, 2: He kinh doanh, 3: He san xuat): ");
    scanf("%d", &loai);

    if (kwh <= 50) {
        tien = kwh * 1500;
    } else if (kwh <= 100) {
        tien = 50 * 1500 + (kwh - 50) * 2000;
    } else if (kwh <= 200) {
        tien = 50 * 1500 + 50 * 2000 + (kwh - 100) * 2500;
    } else {
        tien = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kwh - 200) * 3000;
    }

    if (loai == 1) {
        phuPhi = tien * 0.05;
    } else if (loai == 2) {
        phuPhi = tien * 0.10;
    } else {
        phuPhi = tien * 0.08;
    }

    tien += phuPhi;

    printf("Tien dien = %.0f VND\n", tien);
    return 0;
}


