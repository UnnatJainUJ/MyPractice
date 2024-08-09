#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        if(i==0){
            for (int j = 0;j < n; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else{
        int l = 0;
        k = (2 * i - 1);
        for (int j = 0; j < ((n + 1) / 2)-i; j++)
        {
            cout << "*";
        }
        while (k != l)
        {
            cout << " ";
            l++;
        }
         for (int j = 0; j < ((n + 1) / 2)-i; j++)
        {
            cout << "*";
        }

        cout << endl;
        }
    }

     for (int i = 0; i < (n - 1) / 2; i++)
    {

        int l = 0;
        k = (n-(2*(i+2)));
        if(i==(n-3)/2){
            for (int j = 0;j < n; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else{
        for (int j = 0; j < i+2; j++)
        {
            cout << "*";
        }
        while (k != l)
        {
            cout << " ";
            l++;
        }
         for (int j = 0; j < i+2; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    }
    return 0;
}