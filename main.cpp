#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double a, b, c;
    char d;
    int p = 0;
    while (p != 1)
    {
        printf("0 - calculator\n1 - exit\n");
        scanf("%d", &p);
        if (p != 0) break;
        printf("Write expression (without spaces, supported only 1 operation per itteration):\noperation symbols * / + - ");
        scanf("%lf%c%lf", &a,&d,&b);
        while(getchar() != '\n');
        switch(d)
        {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break;
        default:
            printf("Wrong action\n");
            continue;
        }
        printf("Result = %lf\n", c);
    }
}