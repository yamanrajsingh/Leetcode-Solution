class MyStack {
public:
     queue<int>q;
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
        int n=q.size()-1;
        int i=0;
        while(i<n)
        {
            q.push(q.front());
            i++;
            q.pop();
        }    
    }
    
    int pop() {
        int x =q.front();
        q.pop();
        return x;
    }
    
    int top() {
       return q.front();
    }
    
    bool empty() {
        return q.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */