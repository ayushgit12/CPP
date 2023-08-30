#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int sal, int sp)         // Constructor
    { 

        this->name = n;
        this->salary = sal;
        this->secretPass = sp;
    }

    void printD()
    {
        cout << "The name of Employee is " << this->name << " and Salary is " << this->salary << "\n";
    }

private:
    int secretPass;

public:
    void getsecretPass()
    {
        cout << "The secret Password is " << this->secretPass<<endl;
    }
};

int main()
{

    Employee Ayu("Ayush", 999, 69);
    // Ayu.name = "Ayush";
    // Ayu.salary = 1999;
    Ayu.printD();
    Ayu.getsecretPass();
    // cout<<Ayu.secretPass;   not accessible, since secretPass declared private!!
    return 0;
}
