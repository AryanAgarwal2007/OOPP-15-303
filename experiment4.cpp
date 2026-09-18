#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating a collection
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of the collection:" << endl;

    // Range-based for loop with auto
    for (auto element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}