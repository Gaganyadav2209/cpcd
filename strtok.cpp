#include <algorithm>
#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int main() {
//  use of strtok	to break string
 //	char *strtok(char *s,char *delimiters) syntax 
	char s[100] = "today is rainy day ";
	char *ptr= strtok(s," "); // here " " is a delimiters i.e about which the string will get breaked
	cout<<ptr<<endl;
	
	while(ptr!=NULL){
	ptr = strtok(NULL," "); // for subsequent string elements we should pass NULL to strtok
	cout<<ptr<<endl;
	}

	
		
	return 0;
}
