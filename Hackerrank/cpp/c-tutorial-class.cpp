#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
using namespace std;

class Student{
private:
    int age;
    int standard;
    string firstName;
    string lastName;
public:
    void set_age(int age){
        this->age = age;
    }
    void set_standard(int standard){
        this->standard = standard;
    }
    void set_first_name(string firstName){
        this->firstName = firstName;
    }
    void set_last_name(string lastName){
        this->lastName = lastName;
    }
    int get_age(){
        return this->age;
    }
    int get_standard(){
        return this->standard;
    }
    string get_first_name(){
        return this->firstName;
    }
    string get_last_name(){
        return this->lastName;
    }
    string to_string(){
        stringstream ans;
        ans << this->age << "," << this->firstName << "," << this->lastName
            << "," << this->standard;
        return ans.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}