#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    unordered_map<string,int> strings;

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        cin >> strings_item;
        unordered_map<string,int>::iterator it = strings.find(strings_item);
        if (it == strings.end())
            strings.insert({strings_item,1});
        else{
            int value = strings[strings_item];
            strings[strings_item] = ++value;
        }
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        cin >> queries_item;

        queries[i] = queries_item;
    }

    for (int i=0;i<queries.size();i++,fout<<'\n')
        fout << strings[queries[i]];

    fout << "\n";

    fout.close();

    return 0;
}
