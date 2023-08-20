// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as publicx
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch='k';
    double f=0.25649;
    // cin>>ch;
    // while(ch!='k')
    // {
    //     cout.put(ch);
    //     cin.get(ch);
    // }
    cout.width(5);
    cout.fill('*');
    cout.precision(3);
    cout.setf(ios:: left , ios::adjustfield);
    cout<<ch<<endl;
    // cout<<ch;
    return 0;
}