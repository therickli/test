#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 1, c = 3;
    const auto &b = a;

    a = c;
    cout << a << endl
         << b << endl;
    return 0;
}