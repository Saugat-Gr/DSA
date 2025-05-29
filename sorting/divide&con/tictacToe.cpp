#include<iostream>
using namespace std;


int moves[3][3] = {1, 1, 1};


void askData(){
	
	 int x, y;
	
	  cout << "Enter where you want to palce your move." << endl;
	  
	  cin >> x >> y;
	  
	  while(x > 2 && x < 0 || y > 2 && y < 0){
	  	  cout << "You have choosed out of bound options." << endl;
	  	  cin >> x >> y;
	  }
	
	 moves[x][y] = 2;
	
}


void printBoard(){
	
	  cout << "\n";
	  
	  for(int i=0; i < 3; ++i){
	  	
	  	 for(int j=0; j<3; ++j){
	  	 	
	  	 	   cout << moves[i][j] << " ";
	  	 	  if(j != 2){
				 
				 cout << " | " ;
		   } 
	}
		   cout << endl;
		   	  if(i != 2){	 
				cout << "-----------" << endl;
		   } 
		   
	  }
	
}

bool checkWinner(){
	
//	 Check Winner 2, hamro afnei ko lagi 
	
	
	
	for(int i=0; i<3; ++i){
		
	  bool val = true;
		
		 for(int j=0; j<3; ++j){
		 	
		 	  if(moves[i][j] != 2){
		 	  	    val = false;
		 	  	    break;
			   }
		 }
		 	 if (val == true)
	    return true;
	}
	

	    
	for(int i=0; i<3; ++i){
	
	 bool  val = true;	
	
		  for(int j=0; j<3; ++j){
		  	
		  	   if(moves[j][i] != 2){
		  	   	     val = false;
		  	   	     break;
				 }
		  	
		  }
		  	
	if (val == true)
	  return true;
		
	}

	  
	  if(moves[0][1] == 2 && moves[1][1] == 2 && moves[2][2] == 2 ||moves[0][2] == 2 && moves[1][1] == 2 && moves[2][0] == 2  ){
	  	  return true;
	  }
	
	 return false;
}

int main(){
	
	 printBoard();
	
	if(checkWinner()){
		  cout << "Winner Found.";
	}
	askData();
	printBoard();
	return 0;
}
