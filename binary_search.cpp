#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int arr[]={1,2,3,4,4,4,4,5};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	
	//use of binary_search() function in stl
	// in sorted array
	
	bool present = binary_search(arr,arr+n,key);
	if(present){
		cout<<"present";
	} 
	else{
		cout<<"absent";
	}
	
	// two more functions
	// lower_bound(arr,arr+n,key)  it returns the address of the key 
	// if the key is present twice it gives the vaue of key which is present first
	// upper_bound(arr,arr+n,key);
	
	auto lb = lower_bound(arr,arr+n,key); // returns the address of 3
	//gives the address of first element >= key
	
	// we can also use int* lb here
	cout<<lb-arr<<endl;  // lower bound of 4
	
	auto ub = upper_bound(arr,arr+n,key); 
	//gives the address of  element > key
	//in our case the address of 5
	
	
	// upper_bound- lower_bound gives you the frequency of occuerence of the element
	cout<<ub-lb;
	
	
	return 0;
}
