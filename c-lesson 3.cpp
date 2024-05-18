#include <iostream>
using namespace std;
int main()
{
    // sum = 0, num 1 = 2, num 2 = 3, ave = 0
    
    float sum=0, num1=2, num2=3, ave=0;
    
    cout<<"The First Number is "<<num1<<".";
    cout<<"\nThe Second Number is "<<num2<<".";
    
    sum=num1+num2;
    ave=sum/2;
    
    cout<<"\nThe sum is "<<sum<<".";
    cout<<"\nThe average is "<<ave<<".";
    
    return 0;
}