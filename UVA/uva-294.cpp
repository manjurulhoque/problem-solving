#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int test;
    long long number1, number2, c = 0, arr[10000000], j = 0, i;
    scanf("%d", &test);

    while(test--){
        cin>>number1>>number2;
        for(i = number1; i <= number2; ++i){
            if(i % 2 == 0){
                c++;
                arr[j++] = i;
            }
        }
        int miin = arr[0];
        for(int k = 1; k < i; k++){
            if(miin < arr[i]){
                miin = arr[i];
            }
        }
        printf("%d\n", miin);
    }



    return 0;
}
