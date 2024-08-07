#include <iostream>
using namespace std;
int main()
{
    int num, i,a,b;
    cout<<"Enter the number upto which you want the series"<<endl;
    cin >> num;
    cout<<"Enter first two number of the series"<<endl;
    cin>>a>>b;
    int numb[num];
    numb[0] = a;
    numb[1] = b;
    if (num >= 2)
    {
        for (int i = 2; i < num; i++)
        {
            numb[i] = numb[(i - 1)] + numb[(i - 2)];
        }
    };
    cout<<"Your series is :"<<endl;
    for (int x = 0; x < num; x++)
    {
        cout << numb[x] << endl;
    }

    return 0;
}