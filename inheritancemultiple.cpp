#include <iostream>
using namespace std;
class acdemic{ public:
    string subject;
    char grade;
 protected:
    void get_data(){
        cout<<"Enter your subject name: ";
        cin>>subject;
        cout<<"Enter your grade: ";
        cin>>grade;
    }};

class games{ public:
    string name;
    int level;
protected:
    void get_data(){
        cout<<"Enter your sports name: ";
        cin>>name;
        cout<<"Enter your level(1,2,3,4,5): ";
        cin>>level;
    }};

class student: public acdemic, public games{
    string name;
    int roll_no;
public:
    void data(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your roll number: ";
        cin>>roll_no;
    }
    void display(){
        cout<<"Enter your name: "<<name<<endl;
        cout<<"Enter your roll number: "<<roll_no<<endl;
        cout<<"Enter your subject name: "<<subject<<endl;
        cout<<"Enter your grade: "<<grade<<endl;
        cout<<"Enter your sports name: "<<name<<endl;
        cout<<"Enter your level(1,2,3,4,5): "<<level<<endl;
    } };
int main(){
    student s;
    s.display();
    return 0;
}
