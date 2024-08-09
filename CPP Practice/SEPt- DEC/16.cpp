#include<iostream>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
  for (int i = 0; i < n; i++)
  {
    int l=0;
    k=n-i-1;
    while(k!=l){
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
    int l=0;
    k=i+1;
    while(k!=l){
        cout<<" ";
        l++;
    }
    for (int j = 0; j< i+2; j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
  }
  
return 0;
}