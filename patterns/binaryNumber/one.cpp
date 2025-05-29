#include<iostream>
#include<cmath>
using namespace std;



/*

  Binary Number System: 0-1  base 2, 
  Decimal Number System: 0-9 base 10, 
  

*/

void binaryNum(int n){
	
	int result = 0; 
	int top = 0;
	
	while(n > 0){
		
		 int remainder = n % 2;
		 n /= 2;
		 
		 int add = pow(10, top);
		 
		 remainder = remainder * add;
		 ++top;
		 
		 result += remainder;
	}
	
	cout << result;
	cout << endl;
	
}

void decimalNum(int n){
	
	  
	  int top = 0;
	  
	  int result = 0;
	  
	  while(n > 0){
	  	
	  	 int remainder = n % 10; 
	  	 n /= 10;
	  	 int addValue = pow(2, top);
	  	++top;
	  	result += addValue * remainder;
	  	
	  }
	  
	  cout << result;
	
}




int main(){
	
	 binaryNum(42);
 
     decimalNum(110010);
	
	return 0;
}
