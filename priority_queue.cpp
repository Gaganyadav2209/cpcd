#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
#include<list>
#include<stack>
#include<queue>

using namespace std;

int main() {

 // priority queue
 // it comes under heap data structure
 // we can push and pop data under some priority 
 
 // push,pop -> O(log(N)). because the height of the heap is log(N)
 
 //top -> O(1)
 //empty
 
 priority_queue<int> pq;
 
// for min heap we use
// priority_queue< int,vector<int>,greater<int> > pq;

 int n;
 cin>>n;
 for(int i=0;i<n;i++){
	 int number;
	 cin>>number;
	 pq.push(number); //O(log(N))
	 
	 
 }
// remove the elements

while(!pq.empty()){
	cout<<pq.top()<<" ";  // this output is based on concept of max heap i.e larger element comes first
	pq.pop();
	
}





	return 0;
}
