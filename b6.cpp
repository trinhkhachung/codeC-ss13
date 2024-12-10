#include <stdio.h>
#include <stdbool.h>

bool is_perfect(int n) {
    if (n <= 0)
        return false; 

    int sum = 0; 
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i; 
        }
    }
    return sum == n; 
}

int main() {
    int num1, num2;
    printf("nhap so thu nhat ");
    scanf("%d", &num1);
    printf("nhap so thu hai: ");
    scanf("%d", &num2);
    if (is_perfect(num1)) {
        printf("so %d la so hoan hao\n", num1);
    } else {
        printf("so %d ko phai la so hoan hao.\n", num1);
    }

    if (is_perfect(num2)) {
        printf("so %d la so hoan hao\n", num2);
    } else {
        printf("so %d ko phai la so hoan hao\n", num2);
    }

    return 0;
}

