#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) 
        return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num1, num2;
    printf("nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("nhap so thu hai: ");
    scanf("%d", &num2);
    if (is_prime(num1)) {
        printf("S? %d la so ngto.\n", num1);
    } else {
        printf("S? %d ko phai la so ngto.\n", num1);
    }

    if (is_prime(num2)) {
        printf("S? %d la so ngto\n", num2);
    } else {
        printf("S? %d ko phai la so ngto.\n", num2);
    }

    return 0;
}

