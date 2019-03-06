#include <iostream>
#include <iomanip>

using namespace std;

void getScore(int &n1, int &n2, int &n3, int &n4, int &n5);
void calcAverage(int &n1, int &n2, int &n3, int &n4, int &n5);
int findLowest(int &n1, int &n2, int &n3, int &n4, int &n5);

int main()
{
    int n1, n2, n3, n4, n5;
    getScore(n1, n2, n3, n4, n5);
    calcAverage(n1, n2, n3, n4, n5);
}

void getScore(int &n1, int &n2, int &n3, int &n4, int &n5)
{
    cout << "Please enter score one: ";
    cin >> n1;
    cout << "Please enter score two: ";
    cin >> n2;
    cout << "Please enter score three: ";
    cin >> n3;
    cout << "Please enter score four: ";
    cin >> n4;
    cout << "Please enter score five: ";
    cin >> n5;
    cout << endl;
    cout << "==========================";
    cout << endl << endl;

    if((n1 < 0 || n1 > 100) ||
       (n2 < 0 || n2 > 100) ||
       (n3 < 0 || n3 > 100) ||
       (n4 < 0 || n4 > 100) ||
       (n5 < 0 || n5 > 100))
    {
        if(n1 < 0 || n1 > 100)
        {
            cout << "Score one is invalid" << endl;
        }
        if(n2 < 0 || n2 > 100)
        {
            cout << "Score two is invalid" << endl;
        }
        if(n3 < 0 || n3 > 100)
        {
            cout << "Score three is invalid" << endl;
        }
        if(n4 < 0 || n4 > 100)
        {
            cout << "Score four is invalid" << endl;
        }
        if(n5 < 0 || n5 > 100)
        {
            cout << "Score five is invalid" << endl;
        }
        cout << endl;
        cout << "==========================" << endl << endl;
        cout << "Therefore average cannot be calculated" << endl;
        exit(0);
    }

}

void calcAverage(int &n1, int &n2, int &n3, int &n4, int &n5)
{
    int lowest = findLowest(n1, n2, n3, n4, n5);
    cout << "The average is " << (n1 + n2 + n3 + n4 + n5 - lowest)/4.0 << endl;
}

int findLowest(int &n1, int &n2, int &n3, int &n4, int &n5)
{
    int lowest = n1;
    if(n2 < n1)
    {
        lowest = n2;
    }
    if(n3 < n2)
    {
        lowest = n3;
    }
    if(n4 < n3)
    {
        lowest = n4;
    }
    if(n5 < n4)
    {
        lowest = n5;
    }
    return lowest;
}
