#include <iostream>

#include "solution.hpp"

int main() {
    using namespace std;
    Solution s;

    // print result of solution.
    if (s("()"))
        cout << "true." << endl;
    else
        cout << "false." << endl;
    cout << endl;
}