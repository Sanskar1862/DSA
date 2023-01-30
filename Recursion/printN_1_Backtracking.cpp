#include<bits/stdc++.h>
using namespace std;

//using backtracking 
void print(int i,int N){
    if(i>N)
    return;

    print(i+1,N);
    cout<<i<<" ";
    
}

int main(){
    print(1,10);
    return 0;
}