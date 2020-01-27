#include<stdio.h>
#include<math.h>
#include<algorithm>

int main()
{
    int a, b, number, i, c = 0;

    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
        {
            break;
        }

                for(i = a; i <= b; i++)
                {
                    number = sqrt(i);
                    if(number*number == i){
                        c++;
                    }
                }
                printf("%d\n", c);
                c = 0;

    }


    return 0;
}
