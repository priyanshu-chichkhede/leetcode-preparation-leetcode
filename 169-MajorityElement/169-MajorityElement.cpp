// Last updated: 7/6/2026, 1:55:04 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.length()!=t.length()){
5            return false;
6        }
7           //BRUTE FORCE APPROACH   
8        // for(int i=0;i<s.length();i++){
9        //     int count=0;
10        //     for(int j=0;j<t.length();j++){
11        //         if(s[i]==t[j]){
12        //             count++;
13        //             t[j]='&';
14        //             break;
15        //         }
16        //     }
17        //     if(count==0){
18        //         return false;
19        //     }
20        // }
21        // return true;
22        int count[26]={0};
23        for(int i=0;i<s.length();i++){
24            count[s[i]-'a']++;
25        }
26        for(int i=0;i<t.length();i++){
27            count[t[i]-'a']--;
28
29        }
30        for(int i=0;i<26;i++){
31            if(count[i]!=0){
32                return false;
33            }
34        }
35        return true;
36    }
37};