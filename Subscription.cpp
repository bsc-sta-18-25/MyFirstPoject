#include <iostream>
using namespace std;

int main()
{
    int daysUntilExpiration;

    cout << "Enter a number between 0 and 11: ";
    cin >> daysUntilExpiration;

    if (daysUntilExpiration >= 2 && daysUntilExpiration <= 5)
    {
        cout << "Your subscription expires in "
             << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    else if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }
    else if (daysUntilExpiration == 0)
    {
        cout << "Your subscription has expired." << endl;
    }
    else if (daysUntilExpiration >= 6 && daysUntilExpiration <= 10)
    {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    else if (daysUntilExpiration == 11)
    {
        cout << "You have an active subscription." << endl;
    }
    else
    {
        cout << "Invalid number. Enter a number between 0 and 11." << endl;
    }
    return 0;
}