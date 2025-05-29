#include<iostream>
#include<cmath>
using namespace std;

void bubbleSort(int arr[], int size){
	
	 for(int i=0; i<size; ++i){
	 	
	 	 for(int j=0; j < size - i - 1; ++j){
	 	 	  if(arr[j] > arr[j+1])
				{
	 	 	  	  swap(arr[j], arr[j+1]);
				}
		  }
	 }
	
}

void selectionSort(int arr[], int size){
	
	  for(int i=0; i<size; ++i){
	  	
	  	  int smallIndex = i;
	  	  
 	  for(int j=i+1; j<size; ++j){
	  	  	
  	  	   if(arr[j] < arr[smallIndex]){
  	        swap(arr[j], arr[smallIndex]);	 
  	   	   smallIndex = j;
  			}
	}
	  	  
	  	
 }
	
}


void insertionSort(int arr[], int size){
	
	 for(int i=1; i<size; ++i){
	 	
	 	  int temp = arr[i];
	 	  int j = i - 1;
	 	  
	 	  while(j >= 0 && arr[j] > temp){
	 	  	
	 	  	    arr[j+1] = arr[j];
	 	  	    --j;
	 	  	
		   }
	 	  arr[j+1] = temp;
	 }
	
}

void shellSort(int arr[], int size){
	
	  for(int gap = floor(size/2); gap > 0; gap /= 2){
	  	
	  	 for(int i=gap; i<size; ++i){
	  	 	
	  	 	   int temp = arr[i];
	  	 	   int j = i;
	  	 	   
	  	 	   while(j >= gap && arr[j-gap] > temp){
	  	 	   	      arr[j] = arr[j-gap];
	  	 	   	      j -= gap;
				  }
	  	 	   arr[j] = temp;
		   }
	  	
	  }
	
}


void printArray(int arr[], int size){
	
	  for(int i=0; i<size; ++i){
	  	  cout << arr[i] << "  ";
	  }
	 cout << endl;
}

int main(){
	
	int arr[7] = {6, -1, 100,  9, 10, 12, 1};
	
//	bubbleSort(arr, 5);
//selectionSort(arr, 7);

//insertionSort(arr, 7);
shellSort(arr, 7);
	
	printArray(arr, 7);
	
	return 0;
}
