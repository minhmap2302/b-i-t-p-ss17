#include <stdio.h>
void inputArray(int *a, int *m);
void printArray(int *a, int *m);
int sumItem(int *a, int *m);
int maxItem(int *a, int *m);
int main() {
    int a[100];
    int m;
    int choice;
    do {
        printf("\tMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Hay nhap lua chon cua ban : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputArray(a, &m);
                break;
            case 2:
                printArray(a, &m);
                break;
            case 3:
                printf("Do dai cua mang la : %d\n", m);
                break;
            case 4:
                printf("Tong cac phan tu trong mang la : %d\n", sumItem(a, &m));
                break;
            case 5:
                printf("Phan tu lon nhat trong mang la : %d\n", maxItem(a, &m));
                break;
            default:
                printf("Lua chon khong hop le...........\n");
                break;
        }
    } while (choice != 6);
    return 0;
}
void inputArray(int *a, int *m) {
    printf("Hay nhap so phan tu cho mang : ");
    scanf("%d", &*m);
    for (int i = 0; i < *m; i++) {
        printf("Nhap phan tu arr[%d] = ", i);
        scanf("%d", &*(a + i));
    }
}
void printArray(int *a, int *m) {
    printf("Mang cua ban la :\n");
    for (int i = 0; i < *m; i++) {
        printf("%d\t", *(a + i));
    }
    printf("\n");
}
int sumItem(int *a, int *m) {
    int sum = 0;
    for (int i = 0; i < *m; i++) {
        sum += *(a + i);
    }
    return sum;
}
int maxItem(int *a, int *m) {
    int max = *a;
    for (int i = 0; i < *m; i++) {
        if (*(a + i) > max) {
            max = *(a + i);
        }
    }
    return max;
}

