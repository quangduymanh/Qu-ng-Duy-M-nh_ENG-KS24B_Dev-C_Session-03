#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Vui long nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name); // Tinh do dai chuoi
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0'; // Loai bo ky tu '\n'
    }

    printf("Xin chao, %s!\n", name);
    return 0;
}
