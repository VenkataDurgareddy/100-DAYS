#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<s[k-1];
    return 0;
}
