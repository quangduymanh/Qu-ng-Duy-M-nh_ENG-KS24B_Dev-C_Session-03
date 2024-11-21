#include <stdio.h>

struct SinhVien {
    int stt;
    char hoTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};

int main() {
    int n;

    // Nhap so luong sinh vien
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Khai bao mang sinh vien
    struct SinhVien sinhVien[n];

    // Nhap thong tin sinh vien
    for(int i = 0; i < n; i++) {
        sinhVien[i].stt = i + 1; // Gan so thu tu cho sinh vien
        printf("\nNhap thong tin sinh vien %d:\n", sinhVien[i].stt);
        
        printf("Ho va ten: ");
        scanf(" %[^\n]s", sinhVien[i].hoTen);  // Nhap ten co dau cach
        
        printf("Tuoi: ");
        scanf("%d", &sinhVien[i].tuoi);
        
        printf("So dien thoai: ");
        scanf("%s", sinhVien[i].soDienThoai);
        
        printf("Email: ");
        scanf("%s", sinhVien[i].email);
    }

    // In danh sach sinh vien
    printf("\nDANH SACH SINH VIEN\n");
    printf("---------------------------------------------------------------\n");
    printf("| STT | Ho va ten             | Tuoi | So dien thoai | email     |\n");
    printf("---------------------------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("| %-3d | %-20s | %-4d | %-14s | %-12s |\n", 
            sinhVien[i].stt, sinhVien[i].hoTen, sinhVien[i].tuoi, sinhVien[i].soDienThoai, sinhVien[i].email);
    }
    printf("---------------------------------------------------------------\n");

    return 0;
}
