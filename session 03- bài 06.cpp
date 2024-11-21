#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;

    // Nhap do dai canh day va chieu cao tam giac
    printf("Nhap do dai canh day tam giac: ");
    scanf("%f", &canhDay);

    printf("Nhap chieu cao tam giac: ");
    scanf("%f", &chieuCao);

    // Tinh dien tich tam giac
    dienTich = (canhDay * chieuCao) / 2;

    // In ket qua
    printf("Dien tich tam giac la: %.2f\n", dienTich);

    return 0;
}
