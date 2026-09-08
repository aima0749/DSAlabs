#include <iostream> 
using namespace std;
int main()
{
    //intializing int array and indices for smallest s and largest l 
    int numbers[8] , s = 0  , l = 0 ;

    
    cout << "Enter 8 integers : ";
    for(int i = 0 ; i < 8 ; i++)
    {
        cin >> numbers[i];
    }

    //smallest and largest elements are initialized by their oposite max and min possible
    int smallest = INT_MAX ;
    int largest = INT_MIN ; 

    //the less than condition automatically prints  first index 
    //finding smallest element 
    for (int i = 0 ; i < 8 ; i++)
    {
        if(numbers[i] < smallest )
        {   smallest = numbers[i];
            s = i;}

    }

    //finding largest element 
    for (int i = 0 ; i < 8 ; i++)
    {
        if(numbers[i] > largest )
        {   largest = numbers[i];
            l = i;}
    }

    
    cout << "Smallest number : " << smallest << "  Index : " <<s << endl;
    cout << "Largest number : " << largest  << "  Index : " <<l;


}