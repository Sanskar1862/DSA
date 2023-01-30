#include<bits/stdc++.h>
using namespace std;

void print(int i,int n)
{
    if(i>n)
    return ;

    cout<<"Sanskar\n";
    print(i+1,n);
}

int main(){
    print(1,5);
    return 0;
}