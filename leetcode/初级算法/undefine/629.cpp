#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    vector<int> a {1,3,4};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}