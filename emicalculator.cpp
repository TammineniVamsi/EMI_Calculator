#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{

	float Amount, Intrestrate, Totalmonths, emi;
	float PerMonth;
    cout<<"Enter the principle Amount: ";
    cin>>Amount;

    cout<<"Enter the Intrest rate: ";
    cin>>Intrestrate;
    
	 cout<<"Enter the Total Months: ";
    cin>>Totalmonths;
    

	PerMonth = Intrestrate / (12 * 100);

	emi = (Amount * PerMonth* pow(1 + PerMonth, Totalmonths)) / (pow(1 + PerMonth, Totalmonths) - 1);

	cout<<emi<<endl;

	return 0;
}
