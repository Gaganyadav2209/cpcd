#include <algorithm>
#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {

  vector<int> v{1,2,3,4,5};
  
  v.push_back(16);  //O(1)
  
  for(auto x:v){
	  cout<<x<<" ";
  }cout<<endl;
  
  // pop_back operation
  
  v.pop_back();  //O(1)
  
  for(auto x:v){
	  cout<<x<<" ";
  }cout<<endl;
  
  //insert some element in the middle of vector. O(N)
  v.insert(v.begin()+3,100);
  for(auto x:v){
	  cout<<x<<" ";
  }cout<<endl;
  
   v.insert(v.begin()+3,4,100); // add 4 elements of value 100
  for(auto x:v){
	  cout<<x<<" ";
  }cout<<endl;
  
   //erase some elememts from middle
   v.erase(v.begin()+2);
   for(auto x:v){
	   cout<<x<<" ";   
	}
   
   // clear all the element,but doesnt delete the memoery occupied by array
   v.clear();
   for(auto x:v){
	   cout<<x<<" ";
	   
   }cout<<endl;
   
   cout<<v.size()<<endl;
   
   if(v.empty()){
	   //to check if vector is empty or not
	   cout<<"vector is empty"<<endl;
   }
   
   v.push_back(10);
   v.push_back(11);
   v.push_back(12);
   v.push_back(13);
  
  
   cout<<v.front()<<endl;  //gives the front element
   cout<<v.back()<<endl;  //last element of vector
   
   //Reserve
   // to avoid doubling we use reserve function
   vector<int> a;
   a.reserve(1000);
   
   
   
  
  
  
  
  
  	
		
	return 0;
}
