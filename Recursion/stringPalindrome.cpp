#include<bits/stdc++.h>
using namespace std;

bool palin(string s,int start,int end){

    char  a = s[start];
    char b =s[end];
    if(start>end)
    return true;
    if(a != b)
    return false;
    return palin(s,start+1,end-1);
}

int main(){

    string s = "abcde";
    int len = s.length();
    bool a = palin(s,0,len-1);
    cout<<a;
}