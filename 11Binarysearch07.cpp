#include <iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int studentcout = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcout++;
            if (studentcout > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ispossible(arr[], n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"bookalloctation is:"<<allocatebooks( arr,n,m);
    return 0;
}