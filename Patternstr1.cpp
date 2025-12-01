#include <iostream>
using namespace std;
void print1(int n)
{
    /* 
    * * *
    * * *
    * * *
    * * * *
    * * * *
    * * * *
    * * * *  */

    int i = 0;
    for (i; i < n; i++)
    {
        int j = 0;
        for (j; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print1(n);
    }


}
