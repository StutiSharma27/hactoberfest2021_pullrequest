//Searching an element in an array using linear search 
#include <iostream>
using namespace std;

int linear_search(int a[20],int l,int r,int x)
{
    while(l<=r)
    {if(a[l]==x)
        return l;
    else
        return linear_search(a,l+1,r,x);
    }
    return -1;
}

int main()
{
    int a[20],n,x,b,i,l=0,r;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search : ";
    cin>>x;
    r=n-1;
    b=linear_search(a,l,r,x);
    if(b==-1)
        cout<<"Element not found ";
    else
        cout<<"Element found at index : "<<b;

    return 0;
}
