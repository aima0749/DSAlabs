#include <iostream>
using namespace std ;
int main()
{
   //intializing itegers and array 
    int n = 5 , total = 0;

    int numbers[n];
    cout << "Enter 5 integers : \n";
    
    //using loop to write elements in array 
    for(int i = 0 ; i < n ; i++)
    {
       cin >> numbers[i];
    }

    //calculating total and displaying output 
    for(int i = 0 ; i < n ; i++)
    {
       cout << " numbers[i] : " << numbers[i] << endl ;
       total +=  numbers[i];
    }
    
    cout << "Total : " << total ;

}