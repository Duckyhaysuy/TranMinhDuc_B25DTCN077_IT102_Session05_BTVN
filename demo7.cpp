#include <stdio.h>

int main() {
    char ch;
    printf("Nhap ky tu: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) { 
        ch = ch + 32;           
        printf("Ky tu sau khi doi: %c\n", ch);
    } 
    else if (ch >= 97 && ch <= 122) { 
        ch = ch - 32;                 
        printf("Ky tu sau khi doi: %c\n", ch);
    } 
    else {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}

