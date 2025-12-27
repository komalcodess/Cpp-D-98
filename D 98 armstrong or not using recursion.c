
#include <stdio.h>

int armstrongSum(int n) {
    if (n == 0)
        return 0;
    int digit = n % 10;
    return (digit * digit * digit) + armstrongSum(n / 10);
}

int main() {
    int n = 153;

    if (armstrongSum(n) == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
