#include <bits/stdc++.h>
using namespace std;

void print(int Num){

	if(Num == 0)
		return ;

	print(Num-1);
	
	cout<<Num<<" ";
	
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	print(n);
	return 0;
}