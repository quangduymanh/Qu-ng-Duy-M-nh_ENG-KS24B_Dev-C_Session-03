#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yeu cau nguoi dung nhap nhiet do theo do C
    printf("Nhap nhiet do (do C): ");
    scanf("%f", &celsius);

    // Cong thuc chuyen doi Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hien thi ket qua
    printf("Nhiet do %.2f do C = %.2f do F\n", celsius, fahrenheit);

    return 0;
}
