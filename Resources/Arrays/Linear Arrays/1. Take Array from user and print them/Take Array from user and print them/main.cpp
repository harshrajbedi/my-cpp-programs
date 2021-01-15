// Take the Array Size and Elements form user and print that Array.
// This is 1st Program

// In this Program i will sort unsorted Array like (1,0,1,0,1,0,1,0) into (0,0,0,0,1,1,1,1)

#include<iostream>
using namespace std;

int main()
{
    int a[50],n,i;
    
    cout<<"Enter the size of Array MAX 50 : ";
    cin>>n;
    //----------------------------------------------
    cout<<"Now Enter the Elements of Array"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //----------------------------------------------
    cout<<"The Array you Entered is "<<endl;
    for (i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    //----------------------------------------------
    cout<<endl;
}
