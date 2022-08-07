#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
#include<list>
#include<stack>
#include<queue>
#include<map>
using namespace std;




int main() {

 // map is an associative container that stores mapping b/w key and the value
 // two types of map :- simple, unordered
 
 // different operations
 // insert -> insert()
 // query -> find()
 //delete -> erase()
 
 // it is a self balancing BST
 
 // map stores unique key only once
 
 map<string,int> m;
 
 //insert
 m.insert(make_pair("mango",100));
 
 //another way
 pair<string,int> p;
 p.first="apple";
 p.second=120;
 m.insert(p);
 
 //another way
 m["banana"] = 20;
 
 
  
 
 // serach for an element
 string fruit;
 cin>>fruit;
 
  // update the price
  m[fruit] +=22;
  
 auto it=m.find(fruit);
 if(it!=m.end()){
	 cout<<"its price is "<< m[fruit]<<endl;
	 
 }
 else{
	 cout<<"not present"<<endl;
	 
 }
 

 
 
 m.erase(fruit);
 
 //alternate to find function
 
 if(m.count(fruit)){
	 // return 0 if not present and 1 if present
	 cout<<"price is "<<m[fruit]<<endl;
	 
 }
 else{
	 cout<<"could not find the fruit "<<endl;
 }
 
 
 //iterate over all the keys
 
 m["litchi"] = 60;
 m["pineapple"] = 150;
 
 
 for(auto it=m.begin();it!=m.end();it++){
	 cout<<((*it).first)<<" "<<((*it).second)<<endl;
	 
	//  cout<<it->first<<" "<<it->second<<endl;  (another way)
	 
 }
 
 //for each loop 
 for(auto p:m){
	 cout<<p.first<<" "<<p.second<<endl;
	 
 }
 
 
	return 0;
}
