#include <iostream>
#include<stack>
#include<cstring>
using namespace std;

void transfer(stack<int>&s1,stack<int>&s2,int k){
    for(int i=0;i<k;i++){
        int x=s1.top();
        s1.pop();
        s2.push(x);
    }
}

void reverse(stack<int> &s){
    stack<int> s1;
    int n=s.size();
    for(int i=0;i<n;i++) {
    int x=s.top();
    s.pop();
    transfer(s,s1,n-i-1);
    s.push(x);
    transfer(s1,s,n-i-1);
    }
}

int main() {
	// your code goes here
	stack<int> s;
	for(int i=1;i<=5;i++){
	    s.push(i);
	}
	
	reverse(s);
	
	while(!s.empty()){
	    cout<<s.top()<<" ";
	    s.pop();
	}
	
	return 0;
}
