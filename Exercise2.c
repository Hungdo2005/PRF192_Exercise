#include <stdio.h>

void swap(double *x, double *y) {
    double gt = *x;
    *x = *y;
    *y = gt;
}

int main() {
    double a = 3.6, b = 7.2;
    printf("%.2lf %.2lf\n", a, b);

    swap(&a, &b);

    printf("%.2lf %.2lf\n", a, b);
    return 0;
}
