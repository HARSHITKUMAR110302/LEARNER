#include <iostream>
#include <math.h>

using namespace std;

bool prime(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0)
			return false;
	}
	return true;
}

int main(){
	
	int number,t;
	
	cout<<"\n\n\n\t\tEnter the number of test cases \n\t\t:";
	cin>>t;
	
	while(t--){
		cout<<"\n\n\t\tEnter the number to be checked  prime or not \n\n\t\t:";
		cin>>number;
		if(prime(number))
			cout<<"\n\n\t\t\tThe entered number is prime number.";
		else
			cout<<"\n\n\t\t\tThe entered number is not a prime number.";
	}

}
