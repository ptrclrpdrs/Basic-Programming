#include <iostream>
using namespace std;
int main()
{
    string username, password, choice;
    float num1, num2, num3, num4, num5, sum=0, diff=0, product, quotient=0;
    
    
    int i=1;
    while (i<=5){
        cout<<"type data: ";
        cin>>num1, num2, num3, num4, num5;
        sum=sum+num1+num2+num3+num4+num5;
        diff=diff-num1-num2-num3-num4-num5;
        product=num1*num2*num3*num4*num5;
        ++i;
        
    }
    
    cout<<"sum is"<<sum<<".";
    cout<<"\ndifference is"<<diff<<".";
    cout<<"\nproduct is"<<product<<".";
    
    
    return 0;
}
