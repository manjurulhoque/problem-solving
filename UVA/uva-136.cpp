#include<stdio.h>
#define min(a,b)(a<b? a:b)

long ugly[1502],x,y,z;

void UglyGen()
{
    int a,b,c,n;
    ugly[1]=a=b=c=n=1;
    while(n!=1500)
    {
        x=2*ugly[a];

        y=3*ugly[b];

        z=5*ugly[c];

        ugly[++n]=min(x,min(y,z));

        if(ugly[n]==x)
            a++;
        if(ugly[n]==y)
            b++;
        if(ugly[n]==z)
            c++;
    }
}
int main()
{
    UglyGen();
    printf("The 1500'th ugly number is %ld.\n",ugly[1500]);
    return 0;
}
