#include <iostream>
using namespace std;
int main()
{
    int n;
    bool prime= true;
    cout<<"Enter your number here : ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime= false;
            cout<<"The number is divisible by "<<i;
            break;
        }
    
    };
    if(n==0 || n==1){
        prime= false;
    }

    if(prime){
        cout<<"This is a prime number";
    }
    else {
        cout<<" hence,this is not prime";
    }


return 0;
}