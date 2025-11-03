#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] =  ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    printf("\nCac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }

    printf("\nTong cac so nguyen to = %d\n", sum);

    return 0;
}

