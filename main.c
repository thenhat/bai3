#include <stdio.h>
#include <stdlib.h>

int findMaxvalue(int a[10] ) {
    int sophantu;
    int max = 0;
    for (int i = 0; i < sophantu; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int findMinvalue(int a[10]) {
    int sophantu;
    int min = 0;
    for (int i = 0; i < sophantu; ++i) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;

}

int main() {
    int a, b;

    int mangsonguyen[10];
    printf("nhap so luong phan tu cho mang: ");
    scanf("%d", &a);
    if (a > 10) {
        printf("So luong phan tu phai nho hon 10");
        exit;
    }
    for (int i = 0; i < a; ++i) {
        printf("phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &mangsonguyen[i]);
    }
    for (int i = 0; i < a; ++i) {
        printf("phan tu thu %d cua mang co gia tri %d \n", i + 1, mangsonguyen[i]);
    }
    printf("------------------------------------------\n");
    printf("Ban muon in ra so lon nhat hay nho nhat(1|2): ");
    scanf("%d", &b);
    switch (b) {
        case 1 :
            printf("Gia tri lon nhat cua mang %d :", findMaxvalue(mangsonguyen[10]));
            break;
        case 2 :
            printf("Gia tri nho nhat cua mang la %d :", findMinvalue(mangsonguyen[10]));
            break;
    }
    return 0;
}