#include<iostream>
#include<winbase.h>
using namespace std;
int main(){
  int h,m,s,err,a;
  err=a=0;
while(err==0){
    cout<<"Enter hours"<<endl;
    cin>>h;
    cout<<"Enter minutes"<<endl;
    cin>>m;
    cout<<"Enter seconds"<<endl;
    cin>>s;

    if(h<24 && m<60 && s<60){err++;}
    else{system("cls");}
}

while(a==0){
    system("cls");
    cout<<h<<":"<<m<<":"<<s;
    Sleep(1000);
    s++;
    if(s>59){m++;s=0;};
    if(m>59){h++;m=0;};
    if(h>23){h=0;};
}
return 0;
}