#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    system("cls");
    int n,ans;
    ans = 0 ;
    cout<<"Enter Decimal : ";
    cin>>n;
    int bit;
   for (int i = 0; i<32; i++)
    {
        bit = 1&n;
        n = n/2;
        ans = ((pow(10,i))*bit) + ans;
        // i++;

    }
    cout<<"Binary = "<<ans;
    return 0 ;
}