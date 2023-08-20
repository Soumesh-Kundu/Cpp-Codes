/**/
#include <iostream>
using namespace std;

class Stack
{
private:
    int top = -1;
    int *arr;
    int size;

public:
    void push(int data);
    void pop();
    void print()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
private:
    int IsFull()
    {
        if(top==(size-1))
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
        if(top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
public:
    Stack(int x)
    {
        size = x;
        arr = new int[size];
        cout<<"Your stack has been created"<<endl;
    }
    ~Stack()
    {
        cout<<"Your stack has been deleted"<<endl;
        delete[] arr;
        top = -1;
    }

};
void Stack::push(int data)
{
    if (IsFull())
    {
        cout << "Stack Overflow<<endl";
    }
    else
    {
        top++;
        arr[top] = data;
    }
}
void Stack::pop()
{
    if(IsEmpty())
    {
        cout<<"Stack UnderFlow"<<endl;
        
    }
    else
    {
        int data=arr[top];
        top--;
        cout<<"The Poped data is: "<<data<<endl;
    }
}
int main()
{
    int n;
    int data;
    cout << "Lets create a Stack" << endl;
    cout<<"Enter The size of Stack"<<endl;
    cin>>n;
    Stack sp(n);
    while (1)
    {
        cout<<"\nPress 1 to push a data in Stack\n";
        cout<<"Press 2 to pop data from Stack\n";
        cout<<"Press 3 to print all available data in Stack\n";
        cout<<"Press 4 to Exit the stack program\n";
        cout<<"Enter:\n"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter the data Which you want to push in stack\n";
            cin>>data;
            sp.push(data);
            cout<<"your data hase been added to the stack\n \n";
            break;
        case 2:
            cout<<"The poped data from Stack: ";
            sp.pop();
            break;
        case 3:
            cout<<"All available datas in stacks: \n";
            sp.print();
            break;
        case 4:
            cout<<"Thank you for using this Stack program \n \n";
            goto end;
            break;
        default:
            cout<<"wrong choice \n";
            break;
        }
    }
    end:
    return 0;
}