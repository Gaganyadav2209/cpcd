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

 int arr[] = {10,20,30,20,10,10};
 multiset<int> m(arr,arr+6);
 for(auto x:m){
	 cout<<x<<" ";
	 
 }cout<<endl;
 
 // erase 
 m.erase(20);
 for(auto x:m){
	 cout<<x<<" ";
	 
 }cout<<endl;
 
 m.insert(80);
 
 for(auto x:m){
	 cout<<x<<" ";
	 
 }cout<<endl;
 
 // cout -> to find no. of occurence 
 
auto ans=  m.count(10);
 cout<<ans<<endl;
 
 //find
 auto it= m.find(30);
 cout<<*it<<endl;
	return 0;
}
