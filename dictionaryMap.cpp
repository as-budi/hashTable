#include <map>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    map<int, string> students;

    students[905] = "Budi";
    students[802] = "Tono";
    students[603] = "Rini";

    map<int, string>::iterator i;
    for (i = students.begin(); i != students.end(); ++i){
        cout << i->first << " : " << i->second << endl;
    }

    cout << students[603] << endl;

    return 0;
}