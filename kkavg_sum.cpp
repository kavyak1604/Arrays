/*exp7_4-To find sum and average in an array */

#include <iostream>
using namespace std;

int main()
{
    
    int i, n;
    double sum=0, average=0;

    cout << "Enter the elements you want in an array: ";
    cin >> n;
    
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter arr [ " << i << " ] : ";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
      sum += arr[i];
    }

    average = sum/n;

    cout << "The Sum of the Elements of the Array is : " << sum << endl;
    cout << "The Average of the Elements of the Array is : " << average;

    
    return 0;
}
