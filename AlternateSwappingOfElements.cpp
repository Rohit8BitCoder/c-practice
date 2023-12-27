#include <iostream>
#include <random>
#include <stdio.h>
using namespace std;



  void printarray(int arr[],int n){
  for (int i =0; i<n;i++){
   cout<<arr[i]<<"";
   
   
   } cout <<endl;


 }

 /*This function takes an array arr and its size n as parameters.
 It prints the elements of the array separated by spaces and ends with a newline.*/


 void swapalternate (int arr[], int size){

   for (int i=0; i<size; i+=2){

    if (i+1 < size) {

  std::swap(arr[i], arr[i + 1]);
 }


 } 

 }

 /*This function takes an array arr and its size size as parameters. 
 It swaps adjacent elements at even indices with elements at odd indices up to the second-to-last element. 
 It uses the std::swap function for swapping.*/


 int main (){

 int even[8]= {1,3,2,4,5,6,7,8};

 int odd [9] ={11,23,45,74,85,45,27,67,73};

 swapalternate(even,8);
 printarray (even , 8);

 cout << endl;

 swapalternate(odd, 9);
 printarray(odd, 9);


 return 0;
}

/*In the main function, two arrays (even and odd) are defined and initialized with values. 
The swapalternate function is called on each array, alternating the elements as described. 
After each call, the modified array is printed using the printarray function.
The output of the program will be the modified even and odd arrays after the alternate swapping operation.*/
