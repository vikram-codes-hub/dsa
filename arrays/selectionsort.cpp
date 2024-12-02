#include <bits/stdc++.h>
using namespace std;
void selectionedort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int miny = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[miny])
            {
                miny = j;
            }
        }
        if (miny != i)
        {
            swap(arr[miny], arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 4, 9, 6, 5};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionedort(arr, n);
    cout << "after sorting:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}