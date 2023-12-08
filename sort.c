#include<stdio.h>
#define COMPARE (x,y)(((x)<(y)))?-1:((x)==(y))?0:1)
int sch(int arr[],int key,int size)
{
int mid;
int low=0
int high=size-1;
while(low<=high)
{
mid=(low+high)/2;
int com=COMPARE(arr[mid],key);
if(com==0)
return mid;
else if(com==-1)
low=mid+1;
else
high=mid-1;
}
return -1;
}
int main()
{
int arr[]={2,4,6,8,10};
int key=4;
int size=sizeof(arr);
int result =bin_sch(arr,key,size);
if(result==-1)
printf("element  found at 1");
else
printf("element found at %d, result);
}
