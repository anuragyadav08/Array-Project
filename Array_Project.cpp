

#include <iostream>

using namespace std;

int main()
{
    int arr1[50],arr2[50],size1,size2,sum1=0,sum2=0;
    cout<<"Enter Size of 1st Array :";
    cin>>size1;
    cout<<"Enter 1st Array :";
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    } 
    cout<<"Enter Size of 2nd Array :";
    cin>>size2;
    cout<<"Enter 2nd Array :";
    for(int j=0;j<size2;j++)
    {
        cin>>arr2[j];
    }
    for(int i=0;i<size1;i++)
    {
        sum1+=arr1[i];
    }
     for(int j=0;j<size2;j++)
    {
        sum2+=arr2[j];
    }
    if(sum1>sum2)
    {
        cout<<"Sum of 1st Array Element is Greater Than 2nd Array "<<endl;
          cout<<"Sum of 1st Array "<<sum1<<endl;
         cout<<"Sum of 2nd Array "<<sum2;
    }
    else if(sum1<sum2)
    {
        cout<<"Sum of 2nd Array Element is Greater Than 1st Array "<<endl;
          cout<<"Sum of 1st Array "<<sum1<<endl;
         cout<<"Sum of 2nd Array "<<sum2;
    }
    else
    {
        cout<<"Sum of 2nd Array Element is Equalls to 1st Array "<<endl;
        cout<<"Sum of 1st Array "<<sum1<<endl;
         cout<<"Sum of 2nd Array"<<sum2;
    }
    return 0;
}
