#include<bits/stdc++.h>
using namespace std;

int steps(int n){
	if(n<0)
		return 0;
	if(n==1)
		return 1;

	int ans = steps(n-1)+steps(n-2);
	return ans;
}

int main(){
	int n;
	cin>>n;
	int ans = steps(n);
	cout<<ans;
	return 0;
}