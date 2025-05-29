#include<iostream>
using namespace std;

/*

 First Pattern {Easy}:
  
   1 2 3 4 
   1 2 3 4 
   1 2 3 4 
   1 2 3 4

*/

void firstPattern(){
	
	int max = 3;
	
	
	 for(int i=0; i<max; ++i){ 
	 
	   int iter = 1; 
	 
	   while(iter <= max){ 
	     cout << iter << " ";
	     ++iter;
	   }
	 
	  cout << endl;
	 
	 }

  cout << endl;
	
}

/*
 Second Pattern:

 1 2 3 
 4 5 6
 7 8 9
*/

void secondPattern(){
	
	
		int max = 3;
	
	int n = 1;
	
	char c = 'A';
	
	 for(int i=0; i<max; ++i){ 
	 
	   int iter = 0; 
	 
	   while(iter < max){ 
	     cout << c << " ";
	     ++iter;
	     ++c;
	   }
	 
	  cout << endl;
	 
	 }
	
	 cout << endl;
	
}

/*

  Triangle Pattern:
 
  * 
  * * 
  * * *
  * * * *
*/

void thirdPattern(){
	
	  int max = 4;
	  
	  
	  for(int i=0; i<max; ++i){
	  	
	  	 for(int j=0; j<=i; ++j){
	  	 	 cout << "*" << " ";
		   }
		   cout << endl;
	  }	
	  cout << endl;
}


/*
Fourth Pattern:
 1 
 2 2
 3 3 3 
 4 4 4 4
*/

void fourthPattern(){
	
	int max = 4;
	
	for(int i=0; i<max; ++i){
		
		for(int j=0; j<=i; ++j){
			  cout << i + 1 << " ";
		}
		cout << endl;
	}
	 cout << endl;
}

/*
Fifth Pattern:
1
2 1
3 2 1 
4 3 2 1 
*/

void fifthPattern(){
	
	  int max = 5;
	  
	  
	  for(int i=1; i<=max; ++i){
	  	
	  	  for(int j=i; j>=1; --j){
	  	  	  cout << j << " ";
			}
	  	cout << endl;
	  }
}

/*

 Floyd's Triangle Pattern:
1
2 3
4 5 6 
7 8 9 10

*/

void sixthPattern(){
	
	 int max = 4;
	 int n = 1;
	 for(int i=0; i<max; ++i){
	 	
	 	for(int j=0; j<= i; ++j){
	 		  cout << n << " ";
	 		  ++n;
		 }
	 	cout << endl;
	 }
	cout << endl;
}


/*
  Inverted Triangle:
  1 1 1 1
    2 2 2 
      3 3
        4
*/

void invertedTriangle(){
	
	 int max = 4;
	
   for(int i=1; i <= max; ++i){
   	
   	  for(int j=i; j>1; --j){
   	  	  cout << "  ";
		 }
   	
   	
   	for(int k = i; k <= max; ++k){
   		  cout << i << " ";
	   }
   	
   	 cout << endl;
   }
   
   cout << endl;
}


/*

Pyramid Pattern:
 
         1 
      1  2  1
   1  2  3  2  1
1  2  3  4  3  2  1

*/

void pyramidPattern(){
	
	
	  int max = 10;
	
	 for(int i=1; i<=max; ++i){
	 	
	 	for(int j = i; j <= max; ++j){
	 		  cout << "  ";
		 }
	 	
	 	for(int k=1; k <= i; ++k)
	 	{
	 		 cout << k << " "; 
	 		 if(k==i){
	 		 	int rep = k -1;
	 		 	 while(rep >= 1){ 
	 		 	    cout << rep << " ";
	 		 	    --rep; 
				   }
			  }
		 }
	 	 cout << endl;
	 }
	 cout << endl;
}

/*

 Hallow Diamond Pattern:
								 
								            *
								        *     *
                                    *            *
                                 *                 *
                                   *             *
                                      *       *
                                          *

*/

void hallowDiamond(){
	
	int max = 4;
	
	 for(int i=1; i<=max; ++i){
	 	
	 	 for(int j=i; j<max; ++j){
	 	 	  cout << "  ";
		  }
	 	
	 	 cout << "*"; 	 
	 	 
	 	
		  
		  if(i != 1){  
		  
		    for(int l=1; l<= 2 * i; ++l){
		    	  cout << "  ";
			}
		  
		   cout << "*";
		  }
	 	
	 	cout << endl;
	 }
	 
	 for (int i = max - 1; i >= 1; --i) {
        for (int j = max; j > i; --j) {
            cout << "  "; // Spaces before the stars
        }

        cout << "*"; // First star

        for (int k = i - 1; k >= 1; --k) {
            cout << "  "; // Spaces inside
        }

        if (i != 1) { 
            cout << "*"; // Second star (only if it's not the bottom)
        }

        cout << endl;
    }
}

	



int main(){
	
	firstPattern();
	
	secondPattern();
	
	thirdPattern();
	
	fourthPattern();
	
	fifthPattern();
	
	sixthPattern();
	
	invertedTriangle();
	
	pyramidPattern();
	
	hallowDiamond();
	
	return 0;
}
