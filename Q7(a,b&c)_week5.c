#include<iostream>
using namespace std;
struct customer
{
    char name[20];
    int account;
    double balance;
}
void names(customer*value);
{
    for(int = 0;i<5;i++)
    {
        if (value[i].balance < 200)
        {
            cout << value[i].name << endl;
        }
    }
}
void balance(customer *value)
{
    for (int i = 0; i < 5; i++)
    {
        if (value[i].balance > 1000)
        {
            value[i].balance += 100;
            cout << "Balance after increment is: ";
            cout << value[i].balance << endl;
        }
    }
}
int main()
{
    customer data[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the name: " << endl;
        cin.ignore();
        cin.getline(data[i].name, 20);
        cout << "enter account number: " << endl;
        cin >> data[i].account;
        cout << "Enter balance: " << endl;
        cin >> data[i].balance;
        
        
    }
    names(data);
    balance(data);
    system("pause");
    return 0;
    
}