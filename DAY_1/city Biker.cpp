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
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
      int k;
      cin>>k;
      sum=sum+k;
      ans=max(sum,ans);

    }
  cout<<ans;
    return 0;
}
