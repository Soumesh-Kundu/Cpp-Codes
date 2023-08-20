#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int f;
    int r;
    int size;

public:
    queue()
    {
        cout << "Enter the Size of Queue" << endl;
        cin >> size;
        arr = new int[size];
        f = r = -1;
        cout << endl
             << "Your Queue has been created" << endl;
    }
    void store(int x);
    void retrive();
    void display();
    ~queue()
    {
        delete[] arr;
        cout << "Thank you for using this program";
    }

private:
    int IsFull()
    {
        if (((r + 1) % size) == f)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int IsEmpty()
    {
        if (f == r)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
void queue::store(int x)
{
    if (IsFull())
    {
        cout << "Queue Overflow";
    }
    else
    {
        r = (r + 1) % size;
        arr[r] = x;
        f=0;
        cout << "Your data has been stored";
    }
}
void queue::retrive()
{
    if (IsEmpty())
    {
        cout << "Queue Underflow";
    }
    else
    {
        cout << "The data is" << arr[f];
        f = (f + 1) % size;
    }
}
void queue::display()
{
    if (IsEmpty())
    {
        cout << "Queue Is Empty";
    }
    else
    {
        cout << endl
             << "The available data in Queue" << endl;
        i=f;
        while(i!=r)
            {
                cout << arr[i] << " ";
                i=(i+1)%size;
            }
    }
}
int main()
{
    cout << "Creating Your Queue....";
    queue sp;
    int data;
    int n;
    while (1)
    {
        cout <<endl<< "Enter 1 for Store data" << endl;
        cout <<endl<< "Enter 2 for Retrive data" << endl;
        cout <<endl<< "Enter 3 for Display datas" << endl;
        cout <<endl<< "Enter 4 for Exit this program" << endl;
        cout<<endl<<"Enter your choice"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout << "Enter the data:" << endl;
            cin >> data;
            sp.store(data);
            break;
        case 2:
            cout << "Retriving Your data...." << endl;
            sp.retrive();
            break;
        case 3:
            sp.display();
            break;
        case 4:
            cout<<endl<<"Thank you for using this program";
            goto end;
        break;
        default:
        cout<<endl<<"wrong Choice"<<endl;
        }
    }
    end:
    return 0;
}