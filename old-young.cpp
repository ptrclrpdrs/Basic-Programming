#include <iostream>
using namespace std;
int main()
{
    
	// Take 3 ages from the user/s and determine the oldest and the youngest among them.
	
	int age1, age2, age3;	
	
	cout<<"Enter first age: ";
 	cin>>age1;
 	
    cout<<"Enter second age: ";
 	cin>>age2;
 	
 	cout<<"Enter third age: ";
 	cin>>age3;
 	
 	if ((age1>age2)&&(age1>age3))
	{
 		cout<<"\nThe age "<<age1<<" is the oldest among the three.";
	}
	else if (age2>age3)
	{
 		cout<<"\nThe age "<<age2<<" is the oldest among the three.";
	}
 	else
	{
 		cout<<"\nThe age "<<age3<<" is the oldest among the three.";
	}
	
	if ((age1<age2)&&(age1<age3))
	{
 		cout<<"\nThe age "<<age1<<" is the youngest among the three.\n";
	}
	else if (age2<age3)
	{
 		cout<<"\nThe age "<<age2<<" is the youngest among the three.\n";
	}
	else
	{
 		cout<<"\nThe age "<<age3<<" is the youngest among the three.\n";
	}
 		
	return 0;
	
}




