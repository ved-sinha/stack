#include <iostream>
#include<vector>
using namespace std;

class Stack{
    private:
        //because user does not need to know what we are implementing
        vector<int>v;
        
    public:
    void push(int data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty())
        v.pop_back();
    }
    int top(){
        return v[v.size()-1];
    }
};

int main() {
	// your code goes here
	Stack st;
	
	for(int i=1;i<=5;i++){
	    st.push(i*i);
	}
	
	while(!st.empty()){
	    cout<<st.top()<<" ";
	    st.pop();
	}
	
	
	return 0;
}
