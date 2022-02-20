#include <iostream>
using namespace std;

int IBS(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == arr[mid])
            return mid;
        else if (key > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter the size of the array";
    cin >> n;
    int arr[n];

    // Taking input elements of array
    cout << "enter elements in sorted order" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // key element to be searched
    int key = 0;
    cout << "enter the key to search" << endl;
    cin >> key;

    int x = IBS(arr, n, key);
    if (x!=-1)
        cout << key << " is present in array at index " << x << endl;
    else
        cout << key << " is not present in array" << endl;

    return 0;
}
