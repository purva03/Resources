#include<iostream>
using namespace std;

// Print 1 to n using recursion
void display1(int n){
	if(n==1){
		cout<<n<<" ";
		return;
	}
	display1(n-1);
	cout<<n<<" ";
}

// Print n to 1 using recursion
void display2(int n){
	if(n==1){
		cout<<n<<"";
		return;
	}
	cout<<n<<" ";
	display2(n-1);
}

//print factorial of a number using recursion
long long factorial(int n){
	if(n<=1){
	    return 1;
	}
	return factorial(n-1)*n;
	
}

int main(){
	int i;
	cout<<"Enter a number: ";
	cin>>i;
	display1(i); // print numbers from 1 to i
	cout<<endl;
	display2(i); // print numbers from i to 1
	cout<<endl;
	cout<<factorial(i); // print factorial of i i.e i!
	return 0;
}
