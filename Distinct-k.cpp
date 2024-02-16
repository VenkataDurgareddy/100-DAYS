Ashish is provided with a collection of n strings in which some strings are of repeating nature and he has been given with a number k.

His task is to find the kth unique string. Also before finding the kth unique string he has to sort each individual string beforehand. If there are fewer unique strings than k return empty string.

As his best friend, your task is to help Ashish in accomplishing the task.

Input Format
The first line contains an integer n denoting the number of strings.
The next n lines contain strings.
The next line contains an integer k.
Output Format
The output contains the kth distinct string.

Constraints
1<=n<=105
-100<=arr[i]<=100
Sample Testcase 0
Testcase Input
6
d
b
c
b
c
a
2
Testcase Output
a
Explanation
The only strings in arr that are distinct are "d" and "a." The letter "d" comes first, making it the first separate string.


Because "a" appears second, it is the second distinct string. "a" is returned since k == 2.

Sample Testcase 1
Testcase Input
3
aaa
aa
a
1 
Testcase Output
aaa
Explanation
Because all of the strings in arr are unique, the first string "aaa" is returned. 


program
====================================
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
