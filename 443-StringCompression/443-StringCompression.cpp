// Last updated: 7/12/2026, 11:35:30 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        for(int i=0;i<n;i++){
            int count=1;//because the current count is always taken with one letter 
            //as aaa if count is 0 then we get 2 count but there are 3 so we put 1 because
            //we count the one common occurrence as well
           while(i<n-1 && chars[i]==chars[i+1]){
            count++;
            i++;
           }
           if(count==1){
            chars[idx]=chars[i];
            idx++;
           }
           else{
              chars[idx]=chars[i];
                idx++;
            string str=to_string(count);
            for(int j=0;j<str.length();j++){
              chars[idx]=str[j];
              idx++;
            }
            
           }
        }
        return idx;
    }
};