#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    int N;
    double product = 1.0;

    printf("Введите значение N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N должно быть положительным числом.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        double term = 1.0 + i * 0.1;
        product *= term;
        printf("1.%d = %.1f, текущее произведение: %.6f\n", i, term, product);
    }

    printf("\nИтоговое произведение 1.1 * 1.2 * ... * 1.%d = %.6f\n", N, product);

    return 0;
}