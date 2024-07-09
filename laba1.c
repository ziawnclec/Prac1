#include <stdio.h>
#include <stdlib.h>

int main() {
    double t1, t2, t3, total_time;

    printf("Vvedit 3 znachennya:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    total_time = 1 / (1 / t1 + 1 / t2 + 1 / t3);

    printf("Chas neobhidnii dlya zidannya piroga: %.2lf godin\n", total_time);

    return 0;
}
