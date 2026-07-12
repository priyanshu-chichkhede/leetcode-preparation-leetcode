// Last updated: 7/12/2026, 11:12:38 PM
1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char,int> mpp;
5    mpp['I'] = 1;              
6    mpp['V'] = 5;
7    mpp['X'] = 10;
8    mpp['L'] = 50;
9    mpp['C'] = 100;
10    mpp['D'] = 500;
11    mpp['M'] = 1000;
12    int ans=0; 
13    for(int i=0;i<s.length();i++){
14        if(mpp[s[i]]<mpp[s[i+1]]){
15            ans=ans-mpp[s[i]];
16        }
17        else{
18            ans=ans+mpp[s[i]];
19        }
20    }
21    return ans;
22
23    }
24};