#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n, m, c = 0;

    //int student[n];


    while(scanf("%d", &n) == 1){
        for(int i = 0; i < n; i++)
        {
            float sum = 0.0, avr, ans;
            scanf("%d", &m);
            c = 0;
            int student[m];
            for(int j = 0; j < m; j++)
            {
                scanf("%d", &student[j]);
                sum = sum + student[j];
            }
            avr = sum / m;
            for(int i = 0; i < m; i++)
            {
                if(student[i] > avr)
                {
                    c++;
                }
            }
            ans = ((float)c/(float)m);
            printf("%.3f%%\n", ans*100);
            c = 0;
        }
    }


    return 0;
}
