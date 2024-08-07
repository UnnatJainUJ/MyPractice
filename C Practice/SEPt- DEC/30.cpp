#include<iostream>
using namespace std;
int main(){
  int n,k=0;
  cin>>n;

  for (int i = 0; i < n; i++)
  {
    k=n;
    for (int j = 0; j < n; j++)
    {
        cout<<k;
        k--;
    }
    cout<<endl;
  }
  
return 0;
}