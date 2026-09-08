#include <iostream>
using namespace std ;
int main()
{
    //declaring integer array
    int n = 5 ;
    int numbers[n] = {2 , 4 , 6 , 8 , 10};

    //updating array at sepecific index 
    numbers[2] = 7 ;

    //displaying array elements using loop 
    for(int i = 0 ; i < n ; i++)
    {
        cout << numbers[i] << " ";
    }
}