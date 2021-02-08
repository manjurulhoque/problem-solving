#include <stdio.h>


int main()
{
    int a, b, t;

    scanf("%d", &t);
    char c;

    while(t) {
        scanf("%d", &a);
        scanf("%c", &c);
        scanf("%d", &b);

        if(c == '+') {
            printf("%d\n", (a - b));
        }
        if(c == '-') {
            printf("%d\n", (a * b));
        }
        if(c == '*') {
            printf("%d\n", (a + b));
        }

        t--;
    }

    return 0;
}
