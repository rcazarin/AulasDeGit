#include <iostream>

using namespace std;

void soma();

int main()
{
    soma();

    return (0);
}

void soma()
{
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << "a Soma de " << n1 << " + " << n2 << " eh " << re << endl;
}