#include<stdio.h>

void selection_sort(int arr[],int size)
{int temp,small,pos;
	for(int i=0;i<size-1;i++)
	{
		small=arr[i];
		pos=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<small)
			{
				small=arr[j];
				pos=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
	}
	
}

int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; 
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        
        if (a[j] < pivot)  
        {  
            i++;  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  
 
void quick(int a[], int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);   
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
  
  void merge(int a[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2];   
      
      
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0, 
    j = 0;   
    k = beg;  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}

void main(){
int b;
printf("Enter the size of your array:-");
scanf("%d",&b);
int a[b];
printf("Enter your elements:-\n");
for (int i = 0; i < b; i++)
{
    scanf("%d",&a[i]);
}
selection_sort(a[b],b);

for (int i = 0; i < b; i++)
{
    printf("%d",&a[i]);
}

}