#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	// Create a C++ Program to check the input text for the right or wrong answer.
	
    string correct_ans;

    cout<<"What is the capital of Japan?\n";
 	cin>>correct_ans;
        
	if (correct_ans=="Tokyo"|| correct_ans=="tokyo"|| correct_ans=="TOKYO")
	{
    cout<<"\nThat is correct!\n";
	cout<<"Thanks for participating.\n";
	}

	else 
	{
	cout<<"\nOops, the answer you entered is wrong.\n";
	}

	return 0;

}




