#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size){

	if(size == 0 || size==1)
		return true;

	if(arr[0]>arr[1])
		return false;
	else

		return isSorted(arr+1,size-1);
}
int main(){
	
	int arr[]={1,2,3,4,5,6};
	bool ans=isSorted(arr,6);
	cout<<ans;
	return 0;
}