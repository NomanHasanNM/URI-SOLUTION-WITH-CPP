#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int a, size;
    string x;
    cin >> a;
    for (int i = 0; i <= a; ++i)
    {
        getline(cin, x);
        if(i == 0)
            continue;
        size = x.length();
        vector<char> m(size);

        for(int j = 0; j < size; ++j)
        {
            m[j] = x[j];
        }
        reverse(m.begin(), m.begin() + (size/2));
        reverse(m.begin() + (size/2), m.begin() + size);
        for(int j = 0; j < size; ++j)
        {
            cout << m[j];
        }
        cout << endl;
    }
     return 0;
}





