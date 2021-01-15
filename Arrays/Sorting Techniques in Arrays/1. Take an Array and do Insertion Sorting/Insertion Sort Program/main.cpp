//
#include<iostream>
using namespace std;
  
int main()
{
    int a[50],n;
    
    cout<<"Enter the Size of Array MAX 50 : ";
    cin>>n;
    
    cout<<"Enter the Elements of this Array:"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Array Before Insertion Sort"<<endl;
    
    for (int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    
    int k;
    cout<<endl;
    cout<<"Tell me what you want to do"<<endl;
    
    for (int v=0;v<3;v++)
    {
    
    G: cout<<"For Ascending Press 1 or 2 For Descending";
    cin>>k;
    int i,j,temp;
    switch (k)
    {
        case 1:
        {
            for (i=1;i<=n-1;i++)
            {
                j=i;
                    while (j>0 && a[j-1]>a[j])
                    {
                        temp = a[j];
                        a[j] = a[j-1];
                        a[j-1] = temp;
                        j--;
                    }
            }
            
            cout<<endl;
            cout<<"Sorting the Array using Insertion Sort"<<endl;
            cout<<"Pleast Wait..."<<endl;
            
            for (i=0;i<=n-1;i++)
            {
                cout<<" "<<a[i]<<endl;
            }
            
            
            break;
        }
        case 2:
        {
            for (i=1;i<=n-1;i++)
            {
                j=i;
                    while (j>0 && a[j-1]<a[j])
                    {
                        temp = a[j];
                        a[j] = a[j-1];
                        a[j-1] = temp;
                        j--;
                    }
            }
            
            cout<<endl;
            cout<<"Sorting the Array using Insertion Sort"<<endl;
            cout<<"Pleast Wait..."<<endl;
            
            for (i=0;i<=n-1;i++)
            {
                cout<<" "<<a[i]<<endl;
            }
            
            
            break;
        }
            default:
        {
            int d=0;
            cout<<"Please Enter 1 or 2. You have 2 Attempts left"<<endl;
            d++;
            if (d<=2)
            {
               goto G;
            }
            else
            {
                exit(0);
            }
        }
    }
    }
}
