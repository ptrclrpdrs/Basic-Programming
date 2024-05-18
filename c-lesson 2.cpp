#include <iostream>
using namespace std;
int main()
{
    //Obtain the ff information from the user and display in a resume format.
    // name, age, address, phone number, school, and department.
    
    string name, address, school, department;
    int age, numb;
    
    cout<<"Type your name:";
    cin>>name;
    
    cout<<"Type your age:";
    cin>>age;
    
    cout<<"Type your address:";
    cin>>address;
    
    cout<<"Type your phone number:";
    cin>>numb;
    
    cout<<"Type your school:";
    cin>>school;
    
    cout<<"Type your department:";
    cin>>department;
    
    cout<<"\n\n\t\t\tProfile\n\n";
    cout<<"Name: "<<name;
    cout<<"\nAge:\t"<<age;
    cout<<"\nAddress: "<<address;
    cout<<"\nPhone Number: "<<numb;
    cout<<"\nSchool:\t"<<school;
    cout<<"\nDepartment: "<<department;
    
    return 0;
}