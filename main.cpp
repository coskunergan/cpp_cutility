#include <bits/stdc++.h>
#include <iostream>
#include <cstddef>
#include "cutility.h"
#include "date.h"
#include <string>
#include <fstream>

using namespace std;
using namespace project;

int main()
{
    cout << "\n-------------------------------\n";

    unordered_set<string> myset;

    for(size_t i = 0; i < 100; i++)
    {
        myset.insert(rname());
    }

    ofstream ofs{ "output.txt" };
    ofs << "myset.size() = " << myset.size() << '\n';
    ofs << "myset.bucket_count() = " << myset.bucket_count() << '\n';
    ofs << "myset.load_factor() = " << myset.load_factor() << '\n';
    ofs << "myset.max_load_factor() = " << myset.max_load_factor() << '\n';

    ofs << "\n\n\n";

    for (size_t i = 0; i < myset.bucket_count(); i++)
    {
        ofs << setw(5) << i <<  "  " << setw(3) << myset.bucket_size(i) << " ";
        for (auto iter = myset.begin(i); iter != myset.end(i); ++iter)
        {
            ofs << *iter << " ";
        }
         ofs << '\n';
    }
    

    cout << "\n-------------------------------\n";
    return 0;
}

