// #include<bits/stdc++.h>
// using namespace std;

// //parameterised recursion
// void add(int N, int sum)
// {
//     if(N<1){
//         cout<<sum;
//         return ;
//     }
//     add(N-1,sum+N);
// }



// //functional recursion
// int add1(int N){
//     if(N==0)
//         return 0;

//     return N+add1(N-1);
// }
// int main(){
// //    add(7,0);
// int a = add1(7);
// cout<<a; 
// }
#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){
    long long int num;
    cin>>num;

    if(num%2 == 0)
    cout<<num/2<<endl;
    else
    cout<<(num/2)+1<<endl;
    }
    return 0;
}