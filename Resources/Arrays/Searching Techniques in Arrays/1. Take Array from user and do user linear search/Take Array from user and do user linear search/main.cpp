// Take the Array from user and ask user to search for the Element (LINEAR SEARCH)
// This is the 2nd Program

#include<iostream>
using namespace std;

int main()
{
    int a[50],n,i,srch,c=0;
    
    cout<<"Enter the Array Size MAX 50 : ";
    cin>>n;
    
    cout<<"Enter the Elements of Array"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter the Number you want to search : ";
    cin>>srch;
    
    for (i=0;i<n;i++)
    {
        if (a[i] == srch)
        {
            c++;
            cout<<"The Element "<<srch<< " is Present @ index "<<i<<endl;
        }
    }
    
    if (c==0)
    {
        cout<<"The number you have search is NOT present in this Array TRY ANOTHER DIGIT"<<endl;
    }
}

