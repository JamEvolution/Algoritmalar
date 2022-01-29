#include <iostream>

using namespace std;

// Find Mininum Element in an Array using Linear Search
 
 main(){
	
	int i, mininum;
	int arr[10] = {80,60,7,10,109,38,12,16,10,206};
	
	mininum = arr[0];
	cout<<"\nThe data element of array:";
	for(i=0; i<10; i++){
		cout<<" "<<arr[i];
		if(mininum > arr[i]){
			mininum = arr[i];
		}
	}
	cout<<"\n\nMininum of the data element of array using linear search is: "<<mininum;
	
	return 0;
}
