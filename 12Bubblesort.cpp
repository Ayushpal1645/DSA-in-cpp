#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped =false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped =true;
            }
        }
        if(swapped==false)
        break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[10];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout << "sorted arrray:" << endl;
    bubblesort(arr, n);
    return 0;
}