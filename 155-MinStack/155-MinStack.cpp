// Last updated: 8/5/2026, 7:47:37 PM
1class MinStack {
2public:
3    stack<pair<int, int>> s;
4
5    MinStack() {
6
7    }
8
9    void push(int value) {
10        if (s.empty()) {
11            s.push({value, value});
12        } 
13        else {
14            int mini = min(value, s.top().second);
15            s.push({value, mini});
16        }
17    }
18
19    void pop() {
20        s.pop();
21    }
22
23    int top() {
24        return s.top().first;
25    }
26
27    int getMin() {
28        return s.top().second;
29    }
30};
31
32/**
33 * Your MinStack object will be instantiated and called as such:
34 * MinStack* obj = new MinStack();
35 * obj->push(value);
36 * obj->pop();
37 * int param_3 = obj->top();
38 * int param_4 = obj->getMin();
39 */