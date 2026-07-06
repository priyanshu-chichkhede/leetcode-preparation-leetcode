// Last updated: 7/7/2026, 2:40:07 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
           //BRUTE FORCE APPROACH   
        // for(int i=0;i<s.length();i++){
        //     int count=0;
        //     for(int j=0;j<t.length();j++){
        //         if(s[i]==t[j]){
        //             count++;
        //             t[j]='&';
        //             break;
        //         }
        //     }
        //     if(count==0){
        //         return false;
        //     }
        // }
        // return true;
        int count[26]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            count[t[i]-'a']--;

        }
        for(int i=0;i<26;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};