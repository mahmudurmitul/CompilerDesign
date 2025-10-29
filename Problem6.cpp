#include<iostream>
using namespace std;

int maxnum_number(int arr[],int n)
{
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(flag<arr[i])
        {
            flag=arr[i];
        }
    }

    return flag;

}
int minimum_number(int arr[],int n)
{
    int flag=arr[0];
    for(int i=0; i<n; i++)
    {
        if(flag>arr[i])
        {
            flag=arr[i];
        }
    }

    return flag;

}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"Maximum Number:"<<maxnum_number(arr,5)<<endl;
    cout<<"Minimum Number:"<<minimum_number(arr,5);


}
