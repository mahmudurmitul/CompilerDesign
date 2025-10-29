#include<iostream>
using namespace std;

int average(int arr[], int n)
{

    int sum=0;
   for(int i=0; i<n; i++)
   {
       sum+=arr[i];
   }
   if(sum!=0)
   {
       int avg=sum/n;
       return avg;
   }
   else
   {
       return -1;
   }
}

int main()
{
    int arr[5]={0,0,0,0,0};
    int n=5;
    cout<<"Average:"<<average(arr,n);
}
