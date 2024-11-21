#include <stdio.h>

int main() {
    int so, tongChuSo;

    // Nhap so nguyen 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    // Kiem tra xem so co 4 chu so hay khong
    if (so < 1000 || so > 9999) {
        printf("Vui long nhap mot so nguyen co 4 chu so.\n");
        return 1;  // Thoat neu so khong phai 4 chu so
    }

    // Tinh tong cac chu so
    tongChuSo = 0;
    while (so != 0) {
        tongChuSo += so % 10;  // Lay chu so cuoi cung va cong vao tong
        so /= 10;  // Bo chu so cuoi cung
    }

    // In ket qua
    printf("Tong cac chu so la: %d\n", tongChuSo);

    return 0;
}
