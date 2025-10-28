#include <stdio.h>

int main() {
    int kwh, loai;
    float tien, phuPhi;

    printf("Nh?p s? di?n tiêu th? (kWh): ");
    scanf("%d", &kwh);
    printf("Nh?p lo?i h? tiêu dùng (1: H? gia dình, 2: H? kinh doanh, 3: H? s?n xu?t): ");
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

    printf("Ti?n di?n = %.0f VND\n", tien);
    return 0;
}

