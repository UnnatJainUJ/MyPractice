#include<stdio.h>
int main(){
int b,x,i,m;
printf("Enter the number of elements you want to search in \n");
scanf("%d" , &b );
int a[b];
printf("Enter your data :-\n");
for(i=0 ; i<b;i++){
	scanf("%d", &a[i]);}

//Linear searching about any integer X
printf("Enter number about which you want to perform linear search:- \n");
scanf("%d" , &x );
for(i =0; i<b; i++){
	if(a[i] ==x)
		{ m=i+1 ;
		  printf("Your %dth number element is equal \n", m++);
	break;}
        }
}  