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
	
	int t;
	
	cout<<"\n\n\n\t\tEnter the last term of series \n\t\t:";
	cin>>t;
	
	for(int i=2;i<t+1;i++){
		
		if(prime(i))
			cout<<i<<"\t  ";
		
	}

}
