#include<iostream>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
  for (int i = 0; i < n; i++)
  {
    k=i;
    int l=0;
    while((2*k)!=l){
        cout<<" ";
        l++;
    }
    for (int j = 0; j< n-i; j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
  }

  for (int i = 0; i < n-1; i++)
  {
    k=((n+1)/2)-i;
    int l=0;
    while((2*k)!=l){
        cout<<" ";
        l++;
    }
    for (int j = 0; j<i+((n-1)/2); j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
  }
  
return 0;
}