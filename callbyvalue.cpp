#include<iostream>
using namespace std;

class student
{
    public:
string name;
int roll_no;
float marks;

void get_info()
{
cout<<"\nenter the name of student:";
getline(cin,name);
cout<<"enter the roll number of student";
cin>>roll_no;
cout<<"enter the marks of student";
cin>>marks;
}
};
 class grade
 {
 public:
    void display_grade(student s)
    {
        cout<<"\nenter name of student:"<<s.name;
        cout<<"\nenter roll number of student:"<<s.roll_no;
        cout<<"\nenter marks of student:"<<s.marks;

    }
    void update_grade(student s,int m)
    {
        s.marks=s.marks+m;
    }
 };

 int main()
 {
     student s1;
     s1.get_info();
     grade g1;
     g1.display_grade(s1);
     g1.update_grade(s1,10);
     cout<<"\nenter name of student:"<<s1.name;
        cout<<"\nenter roll number of student:"<<s1.roll_no;
        cout<<"\nenter marks of student:"<<s1.marks;
     return 0;

 }
