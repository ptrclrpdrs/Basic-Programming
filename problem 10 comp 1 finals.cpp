#include <iostream>
using namespace std;
int main()
{
    string username, password, choice;
    float num1, num2, num3, num4, num5, sum, diff, product, quotient;
    
    
    cout<<"Enter the username: ";
    cin>>username;
    
    cout<<"Enter the password: ";
    cin>>password;
    
    do{
    if (username=="admin10" && password=="admin12345"){
        
        cout<<"\nType the first number:";
        cin>>num1;
        
        cout<<"Type the second number:";
        cin>>num2;
        
        cout<<"Type the third number:";
        cin>>num3;
        
        cout<<"Type the fourth number:";
        cin>>num4;
        
        cout<<"Type the fifth number:";
        cin>>num5;
        
        sum=num1+num2+num3+num4+num5;
        diff=num1-num2-num3-num4-num5;
        product=num1*num2*num3*num4*num5;
        quotient=num1/num2/num3/num4/num5;
        
        cout<<"\nThe sum of the numbers entered is "<<sum<<".";
        cout<<"\nThe difference of the numbers entered is "<<diff<<".";
        cout<<"\nThe product of the numbers entered is "<<product<<".";
        cout<<"\nThe quotient of the numbers entered is "<<quotient<<".\n";
        
        cout<<"\nWould you like to try again? [Enter Y/y for yes, and type any key to exit]: ";
        cin>>choice;
        
    }
    
    else{
        
        cout<<"\nInvalid login, please try again.";
        
    }
    
    }
    while (choice=="Y" || choice=="y");
    
    return 0;
}

