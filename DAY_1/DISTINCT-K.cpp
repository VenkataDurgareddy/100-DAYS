#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string ,int>m;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        m[s]++;
    }
    int c=1;
    int k;
    cin>>k;
    for(auto it:v)
   {
       if(m[it]==1)
       {
           if(c==k)
           {
               cout<<it<<" ";
           }
           c++;
       }
   }
    
}
