#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){

    if(start>end)
    return ;

    swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}

int main(){

    int arr[] = {1,2,3,4,5,6};
    reverse(arr,0,5);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}