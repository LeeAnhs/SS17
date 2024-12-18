#include <stdio.h>
#include <stdlib.h>

void arrInput(int **arr,int n) {
    *arr = (int *)malloc(n * sizeof(int));
    if (*arr == NULL) {  
        printf("khong the cap phat bo nho\n");
        exit(1);
    }
    for(int i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}

void arrOutput(int **arr,int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", (*arr)[i]);
    }
}

void arrQ(int n) {
    printf("so phan tu trong mang la: %d", n);
}

void arrSum(int **arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
       sum += (*arr)[i];
    }
    printf("%d", sum);
}

void arrL(int **arr, int n) {
    int temp = 0;
    for(int i = 0; i < n; i++) {
        if(temp < (*arr)[i]) {
            temp = (*arr)[i];
        }
    }
    printf("so lon nhat la: %d", temp);
}
int main(void) {
    int *arr;
    int n = 0;
    int menu;
    do {
        printf("\n");
        printf("***********MENU**********\n");
        printf("1.Nhập vào số phần tử và từng phần tử\n");
        printf("2.Hiển thị các phần tử trong mảng\n");
        printf("3.Tính độ dài mảng\n");
        printf("4.Tính tổng các phần tử trong mảng\n");
        printf("5.Hiển thị phần tử lớn nhất\n");
        printf("6.Thoát\n");
        printf("Enter your number: ");
        scanf("%d", &menu);
        switch(menu) {
            case 1:
                printf("nhap so phan tu muon nhap: ");
                scanf("%d", &n);
                arrInput(&arr, n);
                break;

            case 2:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrOutput(&arr, n);
                break;

            case 3:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrQ(n);
                break;

            case 4:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrSum(&arr, n);
                break;

            case 5:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrL(&arr, n);
                break;
        }
    }while (menu != 6);

}
