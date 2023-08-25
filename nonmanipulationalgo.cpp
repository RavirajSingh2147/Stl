#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    int a[] = {1, 3, 2, 5, 5, 5, 6, 8, 9, 31};
    int size = sizeof(a) / sizeof(a[0]);
    vector<int> vect(a, a + size);
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
    cout << "Now We are sorting the vect" << endl;
    sort(vect.begin(), vect.end());
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
    cout << "Now We are sorting the vect in decending order" << endl;
    sort(vect.begin(), vect.end(), greater<int>());
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    cout << endl;
    cout << "Now We are reverse the vect in decending in acending" << endl;
    reverse(vect.begin(), vect.end());
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }

    cout << endl;
    cout << "Min Element in Vector" << endl;
    cout << *min_element(vect.begin(), vect.end()) << endl;
    cout << "Max Element in Vector" << endl;
    cout << *max_element(vect.begin(), vect.end()) << endl;
    cout << "Sum of Element in Vector" << endl;
    cout << accumulate(vect.begin(), vect.end(), 0) << endl;
    cout << "count of Element in Vector" << endl;
    cout << count(vect.begin(), vect.end(), 5) << endl;
    if (find(vect.begin(), vect.end(), 0) != vect.end())
    {
        cout << "\nElement found";
    }
    else
    {
        cout << "\nElement not found";
    }
}
