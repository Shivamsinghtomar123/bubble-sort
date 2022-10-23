#include<iostream>
using namespace std;
int binarysearch(int a[],int key,int low,int high)
{  

     while (low<=high)
	{
		int mid = (low+high)/2;
		if(key == a[mid])
		{
			cout<<"h"<<mid;
			return mid;
		}
	else if(key < a[mid])
	{
		cout<<"a"<<mid-1;
		return binarysearch(a,key,low,mid-1);
	}
	else if(key > a[mid])
	{
		cout<<"p"<<mid+1;
		return binarysearch(a,key,mid+1,high);
	}
		
	}
     return 1;
}
int main()
{
	int i,key,a[100],num,result,count =0;
	cout<<" Enter the size of array";
	cin>>num;
	for(i = 0; i < num; i++ )
	{
		cout<<" Enter " << i +1<< " element ";
		cin>>a[i];
    }
	cout<<" Enter element for searching ";
	cin>>key;
	result = binarysearch(a,key,0,num-1);
	if(result == 1)
	{
		cout<<" Element not found";
	}
	else
		cout<<" Element found at position "<< result+1;
        
}