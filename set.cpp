#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;




int main() {

 // set can store unique elements
 // for ex :- we have an array containing elements as 1,1,2,3,4,5,4,4,
 
 // then set can be used to store these elements as it only stores unique values
 
 // most of the operations take Log(n) time
 // we cant update in set
 
 
 int arr[]= {10,20,11,13,11,10,20,13,14};
 int n = sizeof(arr)/sizeof(int);
 
 set<int> s;
 for(int i=0;i<n;i++){
	 s.insert(arr[i]);
	 
 }
 
 // print all elements
 
 for(set<int>::iterator it = s.begin();it!=s.end();it++){
	 cout<<*(it)<<" ";   
	 
 }
 cout<<endl;
 
 s.erase(10);
 
 // another way of erasing
 
 // auto it = s.find(10);
 // s.erase(it);
 
 for(auto x:s){
	 cout<<x<<" ";
	 
 }
 
 
	return 0;
}
