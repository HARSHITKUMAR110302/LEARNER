#include <iostream>

using namespace std;

int fact(int n)
{
	if(n!=1)
		return n*fact(n-1);
	else
		return 1;
	
}
int main(){
	int n;
	cout<<"\n\n\t\tEnter the number for calculating factorial \n\t\t\t:";
	cin>>n;
	cout<<"\n\n\t\tThe factorial of the number is \n\t\t\t:"<<fact(n);
	return 0;
}
