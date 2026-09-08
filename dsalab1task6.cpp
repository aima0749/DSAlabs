#include <iostream> 
using namespace std;

int main()
{
    //declaring and writing into integer array 
    int numbers[6];
    cout<< "Enter 6 Integers : ";
    for(int i = 0 ; i < 6 ; i++)
    {
        cin >> numbers[i];
    }

    //using two integers to access array then comparison and swapping to reverse array 
    int left = 0 ;
    int right = 5;
    for(int i = 0 ; i < 6 ; i++)
    {
        if(left < right)
            swap(numbers[left], numbers[right]);
        left++;
        right--;
    }

    //displaying the same array (reversed)
    cout << "Reversed array : ";
    for(int i = 0 ; i < 6  ; i++)
    {
        cout << numbers[i] << " ";
    }

}