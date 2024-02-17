DIFFERNCE BETWEEN MAXFREQ AND LESS FREQ
================================================
  #include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;

    while(n--) {
        int freq, ele;
        cin >> freq >> ele;
        m[ele] += freq; 
    }

    int minFreq = INT_MAX, maxFreq = INT_MIN;
    int minEle, maxEle;

    for(auto it : m) {
        if(it.second < minFreq) {
            minFreq = it.second;
            minEle = it.first;
        }
        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxEle = it.first;
        }
    }

    cout << abs(maxEle - minEle) << endl;
    return 0;
}
