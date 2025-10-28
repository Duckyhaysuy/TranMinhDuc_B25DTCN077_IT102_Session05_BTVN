#include <stdio.h>

int main() {
    float heSoLuong;
    int ngayCong, chucVu;
    float phuCap, thuong = 0, luong;

    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);
    printf("Nhap so ngay cong: ");
    scanf("%d", &ngayCong);
    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);

    if (chucVu == 1)
        phuCap = 500000;
    else if (chucVu == 2)
        phuCap = 1000000;
    else
        phuCap = 2000000;

    if (ngayCong > 26)
        thuong = (ngayCong - 26) * 200000;

    luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;

    printf("Luong = %.0f VND\n", luong);

    return 0;
}

