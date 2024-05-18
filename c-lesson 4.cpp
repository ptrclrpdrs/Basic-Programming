#include <iostream>
using namespace std;
int main()
{
    // Program asks user for weight in kilograms and converts it to pounds.
    // 2.2 pounds in kilograms.

    float kilograms, pounds;
    cout<<"Input weight:";
    cin>>kilograms;
    
    pounds=kilograms*2.2;
    
    cout<<kilograms<<" kg = " <<pounds<<" pounds";
    return 0;
}