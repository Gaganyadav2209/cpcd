#include <algorithm>
#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {

  //vector is a dynamic array which can grow and shrink in size
  // a vector grows by doubling its size
  
  vector<int> a;
  vector<int> b(5,10); // it means 5 element with each value equal to 10
  
  vector<int> c(b.begin(),b.end());
  vector<int> d{1,2,4,5,7,9};
  
  
  // to iterate over a vector
  
  for(int i=0;i<c.size();i++){
	  cout<<c[i]<<" ";
  }
  cout<<endl;
  // using iterator. vector<int>::iterator it // another way
  for(auto it =b.begin();it!=b.end();it++ ){
	  cout<<(*it)<<" ";
	  
  }
  
  cout<<endl;
  
  // for each loop
  
  for(int x:d){
	  cout<<x<<" ";
  }
  
  cout<<endl;
  
  // more functions in vector
  vector<int> v;
  int n;
  cin>>n;

  
  for(int i=0;i<n;i++){
	 int number;
     cin>>number;
	 v.push_back(number); // adds element at the back of the vector
	 
	 }
	 for(auto x:v){
		 cout<<x<<" ";
	 }
	 
	 cout<<endl;
	 
	 
	 cout<<v.size()<<endl;
	 cout<<v.capacity()<<endl;  // size of underlying array
	 cout<<v.max_size()<<endl; // max no of elements vector can hold in worst case
	 
	 
	 
  
  	
		
	return 0;
}
