#include <bits/stdc++.h>
using namespace std;
string yeah[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
string yes[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string yoo[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
int ami;
int main(){
    scanf("%d",&ami);
    string moni = yeah[ami/100] + yes[(ami%100)/10] + yoo[ami%10];
    cout << moni << endl;
    return 0;
}
