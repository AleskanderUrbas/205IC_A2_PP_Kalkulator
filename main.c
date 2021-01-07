#include <stdio.h>

main()
{
    char dzialanie;
    float a, b, c;

    printf("Jakie dzialanie chcesz wykonac:");
    scanf("%f %c %f", &a, &dzialanie, &b);

    switch(dzialanie)
    {
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
        default:
            printf("Podales niewlasciwy symbol dzialania (uzyj +, -, *, /) \n");
            return 0;
    }
    printf ("Wynik=%.1f", c);
    return 0;
}