#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < (2 * n - 1); j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < (n-i); j++)
            {
                cout << "*";
            }

            for (int j = 0; j < (2 * (i) - 1); j++)
            {
                cout << " ";
            }

            for (int j = 0; j < (n-i); j++)
            {
                cout << "*";
            }
            cout<<endl;
        }
    }
    return 0;
}