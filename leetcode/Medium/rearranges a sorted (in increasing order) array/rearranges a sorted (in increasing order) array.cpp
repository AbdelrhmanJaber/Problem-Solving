#include <iostream>
#include <vector>
#include <string>
using namespace std;

string rearrangeArray(vector<int> &arr)
{
    int n = arr.size();
    int first = 0, last = n - 1;
    string s = "";
    while (first < last)
    {
        s += to_string(arr[last--]) + " ";
        s += to_string(arr[first++]) + " ";
    }
    if (first == last)
    {
        s += to_string(arr[first]);
    }
    return s;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    string rearranged = rearrangeArray(arr);

    cout << "Rearranged string: " << rearranged << endl;

    return 0;
}
