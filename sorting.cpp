#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {45, 65, 23, 67, 43, 23,5, 4, 3, 2, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(begin(arr), end(arr));
    for( int i =0;i<size;i++)
    {
        cout <<arr[i] << " ";
    }
}

