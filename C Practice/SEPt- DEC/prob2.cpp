#include<iostream>
using namespace std;
int main(){
  int a,count1 , count2, count3 , count4;
  cout << "Enter your number:-" << endl;
  cin >> a;
  switch(1){
    case 1:
    {
        count1 = a/100;
        a =a-((a/100)*100);
    }
    case 2:{
         count2 = a/50;
        a=a-((a/50)*50);
    }
    case 3:{
        count3 = a/20;
        a = a-((a/20)*20);
    }
    case 4:{
        count4 = a;
        break;
    }



  }  

  cout<<"Notes of 100 rs are: "<<count1<<endl;
cout<<"Notes of 50 rs are: "<<count2<<endl;
cout<<"Notes of 20 rs are: "<<count3<<endl;
cout<<"Notes of 1 rs are: "<<count4<<endl;
return 0;
}