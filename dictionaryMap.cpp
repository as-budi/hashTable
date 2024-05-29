#include <map>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    map<int, string> myDictionary = {{ 1, "Mercury" }, { 2, "Venus" }, { 3, "Earth" }};

    cout << myDictionary[1] << endl;

    return 0;
}