#include<iostream>
using namespace std;
int main()
{
	int *p;
	int arr[5];
	p=arr;
	int i,j;
	cout<<"Enter elements: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"You Entered: ";
	for(j=0;j<5;j++)
	{
		cout<<*p<<endl;
		p++;
	}
	
}
