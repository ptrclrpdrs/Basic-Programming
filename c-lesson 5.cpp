#include <iostream>
using namespace std;
int main()
{
    //Program obtains 5 grades from user and computes average of grades.
    
    float g1, g2, g3, g4 ,g5, sum, average;
    
    cout<<"Grade in English: ";
    cin>>g1;
    
    cout<<"Grade in Filipino: ";
    cin>>g2;
    
    cout<<"Grade in History: ";
    cin>>g3;
    
    cout<<"Grade in Mathematics: ";
    cin>>g4;
    
    cout<<"Grade in Science: ";
    cin>>g5;
    
    sum=g1+g2+g3+g4+g5;
    average=sum/5;
    
    cout<<"\nGWA: "<<average;
    
    return 0;
}
