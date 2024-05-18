#include <iostream>
using namespace std;
int main()
{
    
	// Ask the user how many pounds does his suitcase weigh.
	// If the weight is greater than 50, print "There is a $25 dollar charge for the luggage that is heavy."
	// At the end print, "Thank you for your business."
	
	float suit_wgt;
	
	cout<<"Enter the weight of your suitcase in pounds (lbs):";
 	cin>>suit_wgt;
 	
 	if (suit_wgt>50)
	{
 		cout<<"\nThere is a $25 dollar charge for the luggage that is heavy.\n";
	}
	
	else (suit_wgt<=50);
	{
 		cout<<"\nThank you for your business.\n";
	}
	
	return 0;
	
} 





