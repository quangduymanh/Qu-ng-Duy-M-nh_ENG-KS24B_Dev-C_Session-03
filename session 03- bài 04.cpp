#include <stdio.h>

int main() {
    float toan, van, anh, tongDiem, diemTrungBinh;

    // Nhap diem 3 mon Toan, Van, Anh
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Tinh tong diem va diem trung binh
    tongDiem = toan + van + anh;
    diemTrungBinh = tongDiem / 3;

    // In ket qua
    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);

    return 0;
}
