#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> array;
    int buf;
    int size; cin >> size;
    for (int i=0;i<size;array.push_back(buf),i++)
        cin >> buf;
    cin >> size;
    int a, b;
    cin >>a>>b;
    array.erase(array.begin()+size-1);
    array.erase(array.begin()+a-1,array.begin()+b-1);
    cout << array.size()<<endl;
    for (int i=0;i<array.size();i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}
