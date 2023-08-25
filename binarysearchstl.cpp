#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void show(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1, 3, 2, 5, 6, 8, 9, 31};
    int size = sizeof(a) / sizeof(a[0]);
    int element=6;
    cout << "Array Before Binary Search" << endl;
    show(a, size);
    cout<<endl;
    cout << "Sort Array for  Binary Search" << endl;
    sort(a, a + size);
    show(a, size);
    cout<<endl;    
    if(binary_search(a,a+size,element) ){
        cout<<element<< " found"<<endl;}
    else{
        cout <<element<<"Not Found";
        }
    }
    
