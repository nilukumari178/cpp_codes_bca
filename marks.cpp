#include<iostream>
using namespace std;

class student
{
    string name;
    int roll_num;
    int marks;

public:
    void get_data()
    {
        cout<<"\nenter your name";
        getline(cin,name);
        cout<<"\nenter your roll number";
        cin>>roll_num;
        cout<<"\nenter your marks";
        cin>>marks;
    }

        void display_data()
        {
            cout<<"\nname:"<<name;
            cout<<"\nroll number:"<<roll_num;
            cout<<"\nmarks:"<<marks;
        }
        void compare_marks(student s)
        {
        if(marks>s.marks)
            cout<<endl<<name<<"is having more marks than"<<s.name;
        else
            cout<<s.name<<"is having more marks than"<<name;
        }

};
int main()
{
    student s1,s2;
    s1.get_data();
    s2.get_data();
    s1.compare_marks(s2);
    return 0;
}
