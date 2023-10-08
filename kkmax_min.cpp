#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++) 
    {cin>>a[i];}
      
    for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<n; j++) { if(a[i]>a[j])//arranging the array in an ascending order helps us to identify the min and max term more easily...
            {                            
              int temp = a[i];//...as the first term will be min and the last term will be max
              a[i] = a[j];
              a[j] = temp;
            }
        }
    }
    
    cout<<"Array after swapping (ascending order): ";
   
    for(int i=0; i<n; i++)
    {  
       cout<<a[i]<<" ";
    }  
     cout << "\nmin:" << a[0] <<endl<< "max:" << a[n - 1] << endl;
    return 0;}
