#include<bits/stdc++.h>
using namespace std;

static string s1="";

string value(int a){

	unordered_map<int,string>mp;

	mp.insert({0,"zero"});
	mp.insert({1,"one"});
	mp.insert({2,"two"});
	mp.insert({3,"three"});
	mp.insert({4,"four"});
	mp.insert({5,"five"});
	mp.insert({6,"six"});
	mp.insert({7,"seven"});
	mp.insert({8,"eight"});
	mp.insert({9,"nine"});

	auto it = mp.find(a);
	mp.clear();
	return it->second;
}

void number(int num){

	if(num==0)
	return ;
	
	int r = num%10;
	string k=value(r);
	s1=k+" "+s1;

	number(num/10);
}
 
int main(){
	
	int n;
	cin>>n;

	number(n);
	cout<<s1;
	return 0;
}