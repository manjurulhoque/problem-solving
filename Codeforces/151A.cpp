#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,an;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    an = min(l*k/nl, c*d);
    an = min(an, p/np);

    cout<<an/n<<endl;

    return 0;
}

