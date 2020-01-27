/// UVA 256: Quirk some squares

#include<iostream>
#include<cstdio>
#include<iomanip>
#include<vector>
#include<cmath>
using namespace std;

int n;
vector<int> squares;

int preparation()
{
    for(int i = 0; i < 10000; i++)
    {
        squares.push_back(i * i);
    }
}

int main()
{
    preparation();

    while(scanf("%d", &n) == 1){
        for(int i = 0; i < squares.size(); i++) {
            if(squares[i] >= (int) pow(10, n)){
                break;
            }
            if(pow(squares[i] % (int) pow(10, n / 2) + squares[i] / (int) pow(10, n / 2), 2) == squares[i]){
                cout << setw(n) << setfill('0') << squares[i] << endl;
            }
        }
    }


    return 0;
}
