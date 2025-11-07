<h1>Домашняя работа к лабораторной №8</h1>
<h2>Выполнил: Бондарев Н.Р.</h2
<h2> Вариант 2</h2>
<h3>Условие задачи</h3>
<p>Вычислите для целого N, заданного пользователем, значениe произведения 1,1·1,2·1,3 · ...1,N</p>
<h2> Алгоритм </h2>

1)Начало

2)Создаем переменные N b product = 1.0 просим ввести пользователя N 

3) проверяем подходит ли нам это число

4)считаем произвидение

5)конец                    

<h2>Код программы</h2>

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
<h2>Схема</h2>

<img width="695" height="801" alt="image" src="https://github.com/user-attachments/assets/b6ab55e2-9736-4ac8-8436-a3d35708ff49" />



<h2>Консоль</h2>

<img width="532" height="248" alt="image" src="https://github.com/user-attachments/assets/e60b3629-36e2-4020-ac0f-0edf520fb481" />


