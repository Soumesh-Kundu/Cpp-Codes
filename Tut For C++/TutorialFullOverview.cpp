#include <iostream>
#include <string>
using namespace std;
class Employee
{
    private:
    int Sp;
public:
    string name;
    int salary;
    
    Employee(string name, int salary,int s)
    {
        this->name = name;
        this->salary = salary;
        this->Sp=s;
    }
    void printdetails()
    {
        cout << this->name << endl;
        cout << this->salary << endl;
    }
    void getsecretpassword()
    {
        cout<<Sp;
    }
    //public varible can be access by any method inside the class or outside the class
    //private varible can be access only by that methods which are existing inside the class  
};
//"this->" it is used to access the created object from a class
int main()
{
    cout<<"hello world"<<endl;
    cout<<"Hello";
    //endl is used for newline after a printing statement
    int b;
    //const- used for make stored value constant for a perticuler variable ....we dont change the value of varible after declaration
    cout<<a;
    cout<<"Enter the 1st number"<<endl;
    cin>>b;
    cout<<"the stored value in b"<<b;
    //string= a data type to store collection of character or a sentence
    string name ="hello";
    cout<<name.length()<<endl;
    cout<<name.substr(0,4)<<endl;
    cout<<name.substr(2,4)<<endl;
    // syntex
    // variblename.length()-to know the lenght of the string
    // variblename.substr(x,y)-to print particuler character from position x to position y of a string;
    Employee soumo("soumesh", 10000,45464);
    soumo.name="soumesh";
    soumo.salary=10000;
    soumo.printdetails();
    soumo.getsecretpassword();
    return 0;
}