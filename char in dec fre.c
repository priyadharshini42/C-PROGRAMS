#include<bits/stdc++.h>
using namespace std;
void printChar(string str, int len)
{
    unordered_map<char, int> occ;
    for (int i = 0; i < len; i++)
        occ[str[i]]++;
    int size = occ.size();
    unordered_map<char, int>::iterator it;
    while (size--) {
        unsigned currentMax = 0;
        char arg_max;
        for (it = occ.begin(); it != occ.end(); ++it) {
            if (it->second > currentMax
                || (it->second == currentMax
                    && it->first > arg_max)) {
                arg_max = it->first;
                currentMax = it->second;
            }
        }
        cout << arg_max << " - " << currentMax << endl;
        occ.erase(arg_max);
    }
}
int main()
{

    string str = "geeksforgeeks";
    int len = str.length();

    printChar(str, len);

    return 0;
}
