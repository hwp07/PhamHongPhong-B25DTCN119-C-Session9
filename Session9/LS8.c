#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nCac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        int num = arr[i], flag = 1;

        if (num < 2) flag = 0;
        else {
            for (int j = 2; j <= sqrt(num); j++) {
                if (num % j == 0) {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag) {
            printf("%d ", num);
            sum += num;
        }
    }

    printf("\nTong cac so nguyen to = %d\n", sum);
    return 0;
}

