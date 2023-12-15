#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double interest,interest_rate,payment,Newbalance,PrevBalance,total;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	Newbalance = PrevBalance;
	while(Newbalance != 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year++;//EndOfYear
	cout << setw(13) << left << Newbalance;//Prevbalance
	interest = Newbalance*(interest_rate/100);
	cout << setw(13) << left << interest;//Interest
	total = Newbalance + interest;
	cout << setw(13) << left << total;//Total
		if(total < payment){
			payment = total;
			cout << setw(13) << left << payment;//Payment
			Newbalance = total-payment;
			cout << setw(13) << left << Newbalance;//NewBalance
			cout << "\n";
		}else{
			cout << setw(13) << left << payment;//Payment
			Newbalance = total-payment;
			cout << setw(13) << left << Newbalance;//NewBalance
			cout << "\n";
		}
	}
}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	//cout << fixed << setprecision(2); 
