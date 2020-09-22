#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define WB " "
class Person{
protected:
    string name;
    int age;
public:
    virtual void getdata(){
        cin >> name >> age;
    }
    virtual void putdata(){
        cout << name << WB <<age<<WB;
    }
};
class Professor : public Person{
private:
    int publication;
public:
    void getdata(){
        cin >> name >> age>> publication;
    }
    void putdata(){
        cout <<name <<WB<<age<<WB<< publication<<" 1"<< endl;
    }
};
class Student : public Person{
#define MAX 5
private:
    int marks[MAX];
public:
    void getdata(){
        cin >> name >> age;
        for (int i=0;i<MAX;i++)
            cin >> marks[i];
    }
    void putdata(){
        cout << name<<WB<<age<<WB;
        int sum;
        for (int i=0;i<<MAX;i++) sum+= marks[i];
        cout <<sum<<WB<<2<<endl;
    }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
