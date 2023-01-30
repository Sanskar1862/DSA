#include<bits/stdc++.h>
using namespace std;

void reverse(string &s,int i,int j){

	if(i>j)
		return ;

	swap(s[i],s[j]);
	reverse(s,i+1,j-1);
}
int main(){
	
	string s = "hello my name is kumar sanskar9";
	reverse(s,0,s.length()-1);

	cout<<s;
	return 0;
}