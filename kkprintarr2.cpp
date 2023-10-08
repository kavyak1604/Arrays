# include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the no. of marks you want enter:";
    cin>>n;
    int marks[n];
   for(int i=0;i<n;i++)
   {
    cout<<"Enter the marks:";
    cin>>marks[i];
   }
   for (int i=0;i<n;i++)
   {
    cout<<marks[i]<<endl;
   }
   
}
