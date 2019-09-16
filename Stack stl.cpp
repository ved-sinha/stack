#include <iostream>
#include<stack>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	stack<string> s;
	s.push("APPLE");
	s.push("Guava");
	s.push("Mango");
	
	while(!s.empty()){
	    cout<<s.top()<<" ";
	    s.pop();
	}
	return 0;
}
