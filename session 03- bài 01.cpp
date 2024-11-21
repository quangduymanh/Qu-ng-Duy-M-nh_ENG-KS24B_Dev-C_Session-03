#include <stdio.h>

int main() {
    char name[50];
    int len = 0;
    printf("Vui long nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    // Tinh do dai chuoi va loai bo ky tu '\n'
    while (name[len] != '\0') {
        if (name[len] == '\n') {
            name[len] = '\0'; // Loai bo ky tu '\n'
            break;
        }
        len++;
    }
    printf("Xin chao, %s!\n", name);
    return 0;
}
