#include <stdio.h>

int main() {
    int number, reversedNumber;

    // Nhap mot so nguyen co 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    // Kiem tra xem so co phai la so 4 chu so hay khong
    if (number < 1000 || number > 9999) {
        printf("So nhap vao khong phai la so 4 chu so.\n");
        return 1;
    }

    // Dao nguoc so
    int hangNghin = number / 1000;       // Lay chu so hang nghin
    int hangTram = (number / 100) % 10; // Lay chu so hang tram
    int hangChuc = (number / 10) % 10;  // Lay chu so hang chuc
    int hangDonVi = number % 10;        // Lay chu so hang đon vi

    // Tạo số nghịch đảo
    reversedNumber = hangDonVi * 1000 + hangChuc * 100 + hangTram * 10 + hangNghin;

    // In ra so nghich dao
    printf("So nghich dao la: %d\n", reversedNumber);

    return 0;
}
