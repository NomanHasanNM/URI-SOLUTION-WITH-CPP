
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=2015)
        {
            cout<<n-2014<<" A.C.\n";
        }
        else{
                cout<<2015-n<<" D.C.\n";
        }
    }
    return 0;
}
