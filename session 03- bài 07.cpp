#include <stdio.h>

int main() {
    int so, tongChuSo, hangNghin, hangTram, hangChuc, hangDonVi;

    // Nhap so nguyen 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    // Kiem tra xem so co 4 chu so hay khong
    if (so < 1000 || so > 9999) {
        printf("Vui long nhap mot so nguyen co 4 chu so.\n");
        return 1;  // Thoat neu so khong phai 4 chu so
    }

    // Tinh tong cac chu so
    hangNghin = so / 1000;       // Lay chu so hang nghin
    hangTram = (so / 100) % 10; // Lay chu so hang tram
    hangChuc = (so / 10) % 10;  // Lay chu so hang chuc
    hangDonVi = so % 10;        // Lay chu so hang đon vi

    tongChuSo = hangNghin + hangTram + hangChuc + hangDonVi;

    // In ket qua
    printf("Tong cac chu so la: %d\n", tongChuSo);

    return 0;
}
