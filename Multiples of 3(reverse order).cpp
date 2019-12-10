#include<bits/stdc++.h>
using namespace std;

int main()
{
//    vector<int> arr;
//    for (int counter = 200; counter >= 3; counter--)
//    {
//        if(counter % 3 == 0) cout<<counter<<endl;
//    }

    char s[1000], r[1000];
    int begin, end, count = 0;

    printf("Input a string\n");
    gets(s);

    /// Calculating string length

    while (s[count] != '\0')
        count++;

    end = count - 1;

    for (begin = 0; begin < count; begin++)
    {
        r[begin] = s[end--];
    }

    r[begin] = '\0';

    printf("%s\n", r);

    return 0;
}
