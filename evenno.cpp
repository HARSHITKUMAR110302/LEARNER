#include <iostream>

using namespace std;

int main(){
	
	int number,t;
	
	cout<<"\n\n\nEnter the number of test cases \n\t:";
	cin>>t;
	
	while(t--){
		cout<<"\n\n\t\tEnter the number to be checked even or not \n\n\t\t:";
		cin>>number;
		if(number%2==0)
			cout<<"\n\n\t\t\tThe entered number is a even number.";
		else
			cout<<"\n\n\t\t\tThe entered number is not a even  number.";
	}

}
