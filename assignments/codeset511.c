#include <iostream>
using namespace std;
int main()
{
    string s1, s2, result;
    getline (cin, s1);
    getline (cin, s2);
    result = s1 + s2;
    cout << "Resultant String = "<< result;
    return 0;
}
