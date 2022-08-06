#include <algorithm>
#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main() {
	string s0;
	string s1("hello");
	string s2 = "hello world";
	string s3(s2);
	string s4 = s3;
	
	char a[]={'a','b','c','\0'};
	string s5(a);
	
	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	
	// to check if string is empty or not
	
	if(s0.empty()){
		cout<<"string is empty"<<endl;
	}
	
	//append function adds to the current string
	
	s0.append("I love c++ ");
	cout<<s0<<endl;
	
	s0 += "and python"; // this also works same
	cout<<s0<<endl;
	
	// to remove content of a string clear function is used
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;
	
	
	// compare two strings 
	
	string s6("apple");
	string s7("mango");
	cout<<s6.compare(s7)<<endl;  // returns 0 if string are equal , otherwise returns value >0 or <0
	
	
	// to access any element of string
	cout<<s6[1]<<endl;
	
	
	// we can also find substrings
   string s8("i want to have apple juice");
   int index = s8.find("apple");
   cout<<index<<endl;
	
	
	// remove a word from string
	string s9 = "apple";
	int len = s9.length();
	s8.erase(index,len+1);
	cout<<s8<<endl;
	
	
	// iterate over all characters of string
	for(int i=0;i<s1.length();i++){
		cout<<s1[i]<<":";
	}
	cout<<endl;
	// using iterators
	for(auto it=s1.begin();it!=s1.end();it++){
		// to define iterator
		// string::iterator it
		//or use auto keyword
		
		cout<<(*it)<<",";
	}
	
	cout<<endl;
	// using for each loop
	for( char c:s1){
	cout<<c<<",";            // auto keyword automatically defines the datatype
	}
	
	return 0;
}
