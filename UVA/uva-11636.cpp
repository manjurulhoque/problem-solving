#include<stdio.h>

int main(){
    int n;
    register unsigned c = 1;
    while(scanf("%d", &n) && n>-1){
        register unsigned i = 1, p = 0;
        while(i < n){
            /*
             * In the equation 2^p > n, for which value is greater than input, Here p is the answer
             */
            i <<= 1;
            ++p;
        }
        printf("Case %u: %u\n", c, p);
        ++c;
    }
    return 0;
}
