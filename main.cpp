//#include <bits/stdc++.h>
#include <iostream>
#include <cstddef>
#include "cutility.h"
#include "date.h"
#include <string>
#include <fstream>
#include <queue>
#include <vector>

using namespace std;
using namespace project;

int main()
{
    cout << "\n-------------------------------\n";

    // vector<int> x { 1, 2, 3, 4, 5, 6, 7};

    // stack s{x.begin() + 1, x.begin()+ 4};

    queue<string> q;

    for(size_t i = 0; i < 10; i++)
    {
        auto name = rname();
        cout << name << " ";

        q.push(name);
    }
    cout << "kuyruk da " << q.size() << " oge var\n";

    cout << "kuyruk basi " << q.front() << "\n";
    cout << "kuyruk sonu " << q.back() << "\n";

    q.front() += "can";
    q.back() += "kan";

    while(!q.empty())
    {
        std::cout << q.front() << '\n';
        q.pop();
    }

    cout << "\n-------------------------------\n";
    return 0;
}

