#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
#include<list>


using namespace std;

int main() {

  // list stl in c++ corresponds to doubly linked list
  // it is a data structure to store element like an array ,but memory is not continous
  // each element is connected to next element and the previous element
  
  // it is very useful insert,delete in front or middle is very easy
  
  
  // in array if we add element and the vector size is increasing , it first copies
  // all element then shift every element by 1 position so time consuming
  
  // but in case of doubly linked list if just need to insert a new node 
  // and connect it to next node and the previous node
  
  // O(1) -> doubly linked list push_back ,push_front
  // O(1) -> pop_back,pop_front 
  
  list<int> l;
  
  // initialise
  list<int> l1{1,4,3,9,7,10};
  list<string> l2{"apple","mango","banana","guava"};
  l2.push_back("pineapple");
  
  //sorting in list
  //there is sorting function in list class
  
  l2.sort();
  //reverse the list
  l2.reverse();
  
  
  // iterate over list
  // for each loop
  
  for(auto s:l2){
	  cout<<s<<" ";
  }
  cout<<endl;
  
  l2.pop_front();
  
  for(auto s:l2){
	  cout<<s<<" ";
	  
  }cout<<endl;
  
  l1.sort();
  
  // using iterators
  for(auto it=l1.begin();it!=l1.end();it++){
	  cout<<(*it)<<" ";
	  
  }
  cout<<endl;
  
  cout<<l1.front()<<endl; // to see first element of list
  
  cout<<l1.back()<<endl; // to see last element of list
  
  // some more functions in list
  
  l2.push_back("lemon");
  l2.push_back("guava");		
  
  for(string s:l2){
	  cout<<s<<" ";
	  
  }
  cout<<endl;
  // remove a fruit by value
  string f;
  cin>>f;
  
  l2.remove(f);
  l2.sort();
  for(auto s:l2){
	  cout<<s<<" ";
	  
  }cout<<endl;
  
  
	return 0;
}
