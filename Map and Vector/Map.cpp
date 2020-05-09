
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{

    // empty map container
    map<int, int> m;

    // insert elements in random order
    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));
    m.insert(pair<int, int>(7, 10));

    cout << "\nThe map m is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    for (auto itr = m.begin(); itr != m.find(4); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    map<int, int> m2(m.begin(), m.end());

    cout << "\nThe map m2 after"
         << " assign from m1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    cout << "\m2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    m2.erase(m2.begin(), m2.find(3));
    for (auto itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = m2.erase(4);
    cout << "\m2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;
    return 0;
}
