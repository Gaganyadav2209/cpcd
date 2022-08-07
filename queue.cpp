#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
#include<list>
#include<stack>
#include<queue>

using namespace std;

int main() {

  // queue follows the order of FIFO 
  // first in first out
  queue<int> q;
  for(int i=0;i<=5;i++){
	  q.push(i);  // to push element in queue
	  
  }
  while(!q.empty()){
	  cout<<q.front()<<" ";  // in stack we have top function , in queue we have front function
	  q.pop();
	  
  }
  // push, pop, front, empty
  
 
	return 0;
}
