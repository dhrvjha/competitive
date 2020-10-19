#include <bits/stdc++.h>
#include <unordered_set>
#include <utility>
#include <list>
#include <queue>
using namespace std;

template <typename a>
class NODE{
public:
    a data;
    list<NODE<a>> *adj;
    NODE(a d);
    NODE(a d,a b);
    bool isAdjacent(a b);
    void newAdjacent(a b);
    void deleteAdjacent(a b);
};
template <typename a>
void NODE<a>::deleteAdjacent(a b){
    for (int i=0;adj->begin()+i!=adj->end();i++)
        if (*(adj->begin()+i).data == b)
            adj->erase(adj.begin()+i);
    return;
}
template <typename a>
NODE<a>::NODE(a d){
    this->data = d;
}
template <typename a>
NODE<a>::NODE(a d,a b){
    this->data = d;
    adj.push_back(new NODE(b));
}
template <typename a>
bool NODE<a>::isAdjacent(a b){
    for (int i=0;i<adj.size();i++){
        if (adj[i].data == b)
            return true;
    }
    return false;
}
template <typename a>
void NODE<a>::newAdjacent(a b){
    adj.push_back(new NODE(b));
}


template <typename T>
class graph{
private:
    int v;
    NODE<T> *root;
public:
    graph(){
        root = nullptr;
    }
    graph(int v){
        root=nullptr;
        this->v = v;
    }
    void push(T,T);
    int count(T);
    NODE<T>* find(T);
};
template <typename T>
void graph<T>::push(T a, T b){
    NODE<T>* p = find(a);
    if (!p)
        NODE<T> *newNode = new NODE<T>(a,b);
    else
        if (!p->isAdjacent(b))
            p->newAdjacent(b);
}
template <typename T>
NODE<T>* graph<T>::find(T queryData){
    unordered_set<pair<NODE<T>*,bool>> st;
    queue<T> q;
    q.push(queryData);
    while (!q.empty()){
        int data = q.front();
        q.pop();
    }
}

int main(){
    int s,q;
    cin >> s >> q;
    s--;
    graph<int> gp;
    gp.push(2,3);
    gp.push(5,6);
}