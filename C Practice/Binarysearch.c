#include <stdio.h>
int BinarySearch(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void){

    int b,i;
   printf("Enter the number of elements you want to search in \n");
scanf("%d" , &b );
int a[b];
printf("Enter your data :-\n");
for(i=0 ; i<b;i++){
	scanf("%d", &a[i]);} 
   int element;
   printf("Enter number about which you want to perform linear search:- \n");
scanf("%d" , &element );
   int found_index = BinarySearch(a, 0, b-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}