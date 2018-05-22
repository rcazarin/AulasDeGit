#include <iostream>

using namespace std;

void imp(string txt="Voce esqueceu de digitar alguma coisa");

int main()
{
    imp();
    return 0;
}

void imp(string txt)
{
    cout << txt << endl;
}