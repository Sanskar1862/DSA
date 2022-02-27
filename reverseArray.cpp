#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = n-1;
    char arr[n];
    int temp;
    cout << "enter the values\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n / 2; i++)
    {
        temp = arr[j];        //12 23 45 67 89 92
        arr[j] = arr[i];
        arr[i] = temp;
        j--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}