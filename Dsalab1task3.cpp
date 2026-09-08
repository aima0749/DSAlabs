#include <iostream> 
using namespace std;

//Student class containing public data feild  and function 
class Student 
{
    public:
        
        int rollnumber , marks ;

        void display() 
        {
            cout << "Roll number : " <<   rollnumber << endl;
            cout << "Marks : " << marks << endl;
        }
};

int main()
{
    //creating objects of Student class 
    Student s1;
    Student s2;
    
    
    s1.rollnumber = 1;
    s1.marks = 75 ;

    s2.rollnumber = 2;
    s2.marks = 90 ;

    //displaying data field of objects by display function 
    s1.display();
    s2.display();
    cout << endl ;

    //editing data firld of first object 
    s1.marks = 80;

    //displaying the data fields after making changes 
    s1.display();
    s2.display();
    

}