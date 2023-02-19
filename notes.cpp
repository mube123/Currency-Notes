
#include<iostream>
using namespace std;
int main()
{
	int Rs, n500, n100, n50, n20, n10, n5, n1;
	cout<<"Enter amount= ";
	cin>>Rs;
	n500= Rs/ 500;
	cout<<"The number of 500 notes are: "<<n500;
	Rs= Rs%500;
	n100=Rs/100;
	cout<<"\nThe number of 100 notes are: "<<n100;
	Rs= Rs% 100;
	n50= Rs/50;
	cout<<"\nThe number of 50 notes are: "<<n50;
	Rs= Rs% 500;
	n20= Rs/20;
	cout<<"\nThe number of 20 notes are: "<<n20;
	Rs= Rs% 20;
	n10= Rs/10;
	cout<<"\nThe number of 10 notes are: "<<n10;
	Rs= Rs% 10;
	n5= Rs/5;
	cout<<"\nThe number of 5 coins are: "<<n5;
	Rs= Rs% 5;
	n1= Rs/1;
	cout<<"\nThe number of 1 coins are: "<<n1;
	}
