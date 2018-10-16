#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 1, c = 3;
    const auto &b = a;

    c = 4;
    a = c;

    return 0;
}