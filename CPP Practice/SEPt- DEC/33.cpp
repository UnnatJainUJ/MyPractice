#include<iostream>
using namespace std;
int main(){
  int n,k=0;
  cin>>n;

  for (int i = 0; i < n; i++)
  {
    int l=n-i;
    for (int j = 0; j <n-i; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j <i; j++)
    {
        cout<<l;
        l++;
    }
    
    cout<<"0";
     l=n-1;
    for (int j = 0; j <i; j++)
    {
        cout<<l;
        l--;
    }
    for (int j = 0; j <n-i; j++)
    {
        cout<<" ";
    }
    cout<<endl;
  }
  
return 0;
}