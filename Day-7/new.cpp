#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int search(string pat, string txt) {
        int n = txt.size(), k = pat.size(), count = 0;
        vector<int> patFreq(26, 0), windowFreq(26, 0);
        for(char ch : pat) patFreq[ch - 'a']++;
        for(int i = 0; i < n; i++) {
            windowFreq[txt[i] - 'a']++;
            if(i >= k) windowFreq[txt[i - k] - 'a']--;
            if(windowFreq == patFreq) count++;
        }
        return count;
    }
};


int main(){
    
}