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

 // in  multimap we can have multiple same keys
 // insert, search ,delete -> log(N)
 multimap<char,string> m;
 int n;
 cin>>n;
 
 for(int i=0;i<n;i++){
	 char ch;
	 string s;
	 cin>>ch>>s;
	
	  m.insert(make_pair(ch,s));
	 
 }
 
 auto it = m.begin();
 m.erase(it);
 
 
 // printing some values in multimap using upperbound and lowerbound function
 
 auto it2 = m.lower_bound('b');   // a apple.   a angry
 auto it3 = m.upper_bound('d');   // b banana. b batman.   c cat.  d dog.  e elephant
 
 for(auto it4=it2;it4!=it3;it4++){
	 cout<<it4->second<<" ";
	 
 }cout<<endl;
 
 
 
 // printing
 
 for(auto p:m){
	 cout<<p.first<<" "<<p.second<<endl;
	 
 }
 
 // using find function
 
 auto f = m.find('c');
 if(f->second=="cat"){
	 m.erase(f);             
	 
 }
 cout<<"============="<<endl;
 
 for(auto p:m){
	 cout<<p.first<<" "<<p.second<<endl;
 }
 
	return 0;
}
