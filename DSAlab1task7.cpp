#include <iostream>
using namespace std;

int main() {

    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    //using uni integer to take account of unique numbers of array
    int uni = 0;
    for (int i = 0; i < 10; i++) 
    {
         int current = arr[i];
        bool isdouble = false;

        //using bool to take account of duplicates 
        for (int j = 0; j < uni; j++) {
            if (arr[j] == current) {
                isdouble = true;
                break;
            }
        }
        
        //shifting unique elements in the start 
        if (!isdouble) {
            arr[uni] = current;
            uni++;
        }
    }

    //printing output 
    for (int i = 0; i < uni; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nCount: " << uni;

    return 0;
}