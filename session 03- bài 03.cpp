#include <stdio.h>
#define PI 3.14159

int main() {
    float r, chuVi, dienTich;

    // Nhap ban kinh hinh tron
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    // Tinh chu vi va dien tich
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    // In ket qua
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}
