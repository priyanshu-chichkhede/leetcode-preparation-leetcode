// Last updated: 9/14/2026, 11:10:41 PM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int count=0;
5        while(num!=0){
6        if(num%2==0){
7            num=num/2;
8            count++;
9            continue;
10        }
11        else{
12            num=num-1;
13            count++;
14            continue;
15        }}
16        return count;
17        
18            
19        
20    }
21};