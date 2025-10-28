#include <stdio.h>

int main() {
    double a, b, ket_qua;
    char toan_tu;
    int co_loi = 0;

    printf("Nhap vao so thuc a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Loi nhap lieu cho a.\n");
        return 1;
    }
    
    printf("Nhap vao so thuc b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Loi nhap lieu cho b.\n");
        return 1;
    }

    printf("Nhap vao toan tu (+, -, *, /): ");
    if (scanf(" %c", &toan_tu) != 1) {
        printf("Loi nhap lieu cho toan tu.\n");
        return 1;
    }

    switch (toan_tu) {
        case '+':
            ket_qua = a + b;
            break;
        case '-':
            ket_qua = a - b;
            break;
        case '*':
            ket_qua = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho 0.\n");
                co_loi = 1;
            } else {
                ket_qua = a / b;
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le.\n");
            co_loi = 1;
            break;
    }
    if (co_loi == 0) {
        printf("Ket qua: %.2lf %c %.2lf = %.2lf\n", a, toan_tu, b, ket_qua);
    }
    
    return 0; 
}

