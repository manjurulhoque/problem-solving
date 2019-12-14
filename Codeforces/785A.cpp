#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t, c = 0;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        if(s == "Tetrahedron") c += 4;
        else if(s == "Cube") c += 6;
        else if(s == "Octahedron") c += 8;
        else if(s == "Dodecahedron") c += 12;
        else if(s == "Icosahedron") c += 20;
    }

    cout<<c<<endl;

    return 0;
}

