#include<iostream>
using namespace std;

void printArray(int arr[]){
	
	  for(int i=0; i<5; ++i){
	  	  cout << arr[i] << " ";
	  }
	
	 cout << endl;
}

int pivot(int arr[], int st, int end){
	
	 int ind = st - 1, pivotEl = arr[end];
	 
	 for(int j = st; j < end; ++j){
	 	
	 	   if(arr[j] <= pivotEl){
	 	   	   ++ind;
	 	   	   swap(arr[j], arr[ind]);
			}
			
			printArray(arr);
	 }
	 
	 ++ind;
	swap(arr[end], arr[ind]);
	
	return ind;
}

void quickSort(int arr[], int st, int end){
	
	if(st < end){
		
		int pivIndex = pivot(arr, st, end);
		
		quickSort(arr, st, pivIndex -1);
		quickSort(arr, pivIndex+1, end);
	}
}

int main(){
	
	int arr[5] = {200, 500, 10, 20, -1};
	
	quickSort(arr, 0, 4);
	
	for(int i=0; i<5; ++i){
		  cout << arr[i] << " " ;
	}
	
	
	return 0;
}
