#include <iostream>
#include<stack>
using namespace std;

void pushBottom(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int a=s.top();
    s.pop();
    pushBottom(s,x);
    s.push(a);
}

void reverse(stack<int>&s){
    if(s.empty())
    return;
    int x=s.top();
    s.pop();
    reverse(s);
    pushBottom(s,x);
}

int main() {
	// your code goes here
	stack<int>s;
	for(int i=1;i<6;i++)
	s.push(i);
	reverse(s);
	while(!s.empty()){
	    cout<<s.top()<<" ";
	    s.pop();
	}
	return 0;
}
