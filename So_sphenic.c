#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;  
    int temp = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && n % i == 0) { 
            count++;
            temp *= i;
        }
    }
    if (count == 3 && temp == n) {
        printf("1\n"); 
    } else {
        printf("0\n"); 
    }

    return 0;
}
