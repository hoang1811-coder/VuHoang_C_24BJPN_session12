#include <stdio.h>

long long giaiThua(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
    } else {
        long long result = giaiThua(n);
        printf("Giai thua cua %d la: %lld\n", n, result);
    }

    return 0;
}
