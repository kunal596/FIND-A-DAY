#include <bits/stdc++.h>
using namespace std;

void calender(int mon, int date, int year)
{
    cout << "Enter a year: " << endl;
    cin >> year;
    int k = 0, l;
    string abc;
    int a, result;
    int n;
    string days[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    if (year >= 1400 && year < 10000)
    {
        cout << "enter a month: " << endl;
        cin >> mon;
        for (int i = 1400; i <= year; i += 100)
        {
            k++;
        }
        if (k == 1)
        {
            l = 2;
        }
        if (k == 2)
        {
            l = 0;
        }

        if (k == 3)
        {
            l = 6;
        }
        if (k == 4)
        {
            l = 4;
        }
        if (k > 4)
        {
            if (k % 4 == 1)
            {
                l = 2;
            }
            if (k % 4 == 2)
            {
                l = 0;
            }
            if (k % 4 == 3)
            {
                l = 6;
            }
            if (k % 4 == 0)
            {
                l = 4;
            }
        }
        if (mon <= 12 && mon > 0)
        {
            switch (mon)
            {
            case 1:
                abc = "january";
                a = 0;
                cout << "enter a date: " << endl;
                cin >> date;
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                {
                    if (31 >= date)
                    {
                        cout << date << "-" << mon << "-" << year << endl;
                        result = date + (year % 100) + a + l + (year % 100) / 4;
                        n = result % 7;
                        n = n - 1;
                        cout << days[n];
                    }
                    else
                    {
                        cout << "invalid argument";
                    }
                }
                else
                {
                    if (31 >= date)
                    {
                        cout << date << "-" << mon << "-" << year << endl;
                        result = date + (year % 100) + a + l + (year % 100) / 4;
                        n = result % 7;
                        cout << days[n];
                    }
                    else
                    {
                        cout << "invalid argument";
                    }
                }
                break;
            case 2:
                abc = "february";
                a = 3;
                cout << "enter a date: " << endl;
                cin >> date;
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                {
                    if (29 >= date)
                    {
                        cout << date << "-" << abc << "-" << year << endl;
                        // cout << date << "-" << mon << "-" << year << endl;
                        result = date + (year % 100) + a + l + (year % 100) / 4;
                        n = result % 7;
                        // cout<<result<<endl;
                        // cout<<n;
                        n = n - 1;
                        cout << days[n];
                    }
                }
                else if (29 > date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + (year % 100) + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 3:
                a = 3;
                cout << "enter a date: " << endl;
                abc = "march";
                cin >> date;
                if (31 >= date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 4:
                a = 6;
                cout << "enter a date: " << endl;
                abc = "April";
                cin >> date;
                if (31 > date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 5:
                a = 1;
                cout << "enter a date: " << endl;
                abc = "may";
                cin >> date;
                if (31 >= date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 6:
                a = 4;
                cout << "enter a date: " << endl;
                abc = "june";
                cin >> date;
                if (31 > date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 7:
                a = 6;
                cout << "enter a date: " << endl;
                abc = "july";
                cin >> date;
                if (31 >= date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 8:
                a = 2;
                cout << "enter a date: " << endl;
                abc = "augest";
                cin >> date;
                if (31 >= date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 9:
                a = 5;
                abc = "september";
                cout << "enter a date: " << endl;
                cin >> date;
                if (31 > date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 10:
                a = 0;
                cout << "enter a date: " << endl;
                abc = "octomber";
                cin >> date;
                if (31 >= date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 11:
                a = 3;
                cout << "enter a date: " << endl;
                abc = "november";
                cin >> date;
                if (31 > date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            case 12:
                a = 5;
                cout << "enter a date: " << endl;
                abc = "december";
                cin >> date;
                if (31 >= date)
                {
                    cout << date << "-" << abc << "-" << year << endl;
                    // cout << date << "-" << mon << "-" << year << endl;
                    result = date + year % 100 + a + l + (year % 100) / 4;
                    n = result % 7;
                    cout << days[n];
                }
                else
                {
                    cout << "invalid argument";
                }
                break;
            default:
                cout << "Opps sothing went wrong";
                break;
            }
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    cout<<endl;
}

int main()
{
    int mon, date, year;
    // int a;
    // cout << "enter a cases to check: " << endl;
    // cin>>a;
    // while (a > 0)
    // {
        calender(mon, date, year);
        // a--;
    // }
    return 0;
}