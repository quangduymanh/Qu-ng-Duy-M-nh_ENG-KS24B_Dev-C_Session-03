#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    // Yeu cau nguoi dung nhap so nguyen co 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    // Kiem tra xem so nhap co phai la so 4 chu so khong
    if (number < 1000 || number > 9999) {
        printf("So nhap vao khong phai la so 4 chu so.\n");
        return 1;
    }

    // Dao nguoc so
    while (number != 0) {
        int digit = number % 10;          // Lay chu so cuoi cung
        reversedNumber = reversedNumber * 10 + digit;  // Them chu so vao so nghich dao
        number /= 10;  // Loai bo chu so cuoi cung khoi so
    }

    // In ra so nghich dao
    printf("So nghich dao la: %d\n", reversedNumber);

    return 0;
}
