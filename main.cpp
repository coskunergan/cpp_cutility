//#include <bits/stdc++.h>
#include <iostream>
#include <cstddef>
#include "cutility.h"
#include "date.h"
#include <string>
#include <fstream>
#include <stack>
#include <vector>

using namespace std;
using namespace project;

int main()
{
    cout << "\n-------------------------------\n";

    // vector<int> x { 1, 2, 3, 4, 5, 6, 7};

    // stack s{x.begin() + 1, x.begin()+ 4};

    stack<string> s;

    for(size_t i = 0; i < 10; i++)
    {
        auto name = rname();
        cout << name << " ";

        s.push(name);
    }
    cout << "stack de " << s.size() << " oge var\n";

    while(!s.empty())
    {
        std::cout << s.top() << '\n';

        s.pop();

    }



    cout << "\n-------------------------------\n";
    return 0;
}

