#include <stdio.h>

void binhphuongmang(int mang[], int n) {
    if (mang == NULL || n <= 0) {
        printf("Mang khong hop le !\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        mang[i] *= mang[i];
    }
}

int main() {
    int n;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Kich thuoc mang khong hop le !\n");
        return 1;
    }
    int mang[n];
    printf("Nhap so %d phan tu cho mang: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }
    binhphuongmang(mang, n);
    printf("Mang sau khi binh phuong: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
