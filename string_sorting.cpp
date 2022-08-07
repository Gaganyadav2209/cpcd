#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	cin.get();
	string s[100];
	for(int i=0;i<n;i++){
		getline(cin,s[i]); // to input a string from user, also considers white spaces
		
	}
	sort(s,s+n); // sort in lexicograhic manner 
	// means sorting in dictionary manner
	
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	
	
	
	
	
	return 0;
}
