# include <iostream>
using namespace std;

int main() 
{
    char name[100];
    cout<<"enter string:";
    cin>>name;
    cout<<name<<endl;
    char str1[4]="C++";
    char str2[]={'C','+','+','\0'};
    char str3[4]={'C','+','+'};
    string str4="C++";
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4;
}
