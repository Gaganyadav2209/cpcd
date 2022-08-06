#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	//to search an element in array use find function
	
	auto it = find(arr,arr+n,key);
	int index = it-arr;
	if(index==1){
		cout<<"not present "<<endl;
	}
	else{
		cout<<index;
	}
	// but we prefer use of binary search due to its time complexity
	
	

	return 0;
}
