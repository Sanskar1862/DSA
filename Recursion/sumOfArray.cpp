#include<bits/stdc++.h>
using namespace std;

int totalsum(int *arr,int n){
	if(n==0)
		return 0;
	return arr[0]+totalsum(arr+1,n-1);
}
int main(){
	
	int arr[]={1,2,10,4,5,6};
	int ans = totalsum(arr,6);
	cout<<ans;
	return 0;
}