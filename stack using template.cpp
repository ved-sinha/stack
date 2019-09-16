#include <iostream>
#include<vector>
using namespace std;

template<typename T>

class Stack{
    private:
        //because user does not need to know what we are implementing
        vector<T>v;
        
    public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty())
        v.pop_back();
    }
    T top(){
        return v[v.size()-1];
    }
};

int main() {
	// your code goes here
	Stack<char> st;
	
	for(int i=65;i<=70;i++){
	    st.push(i);
	}
	
	while(!st.empty()){
	    cout<<st.top()<<" ";
	    st.pop();
	}
	
	
	return 0;
}
