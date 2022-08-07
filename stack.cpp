#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
#include<list>
#include<stack>


using namespace std;

int main() {

  // stack is a container that follows LIFO order 
  // last in first out
  
  stack<int> s;
  for(int i=0;i<5;i++){
	  s.push(i);   // to push an element in stack O(1)
	  
  }
  
  while(!s.empty()){
	  cout<<s.top()<<" ";  // to see top element. O(1)
	  s.pop(); // to remove element from stack. O(1)
	  
  }cout<<endl;
  if(s.empty()){
	  cout<<"stack is empty"<<endl;
  }
 
	return 0;
}
