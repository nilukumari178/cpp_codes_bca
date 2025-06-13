#include<iostream>
using namespace std;

public:
class student{
string name;
int roll_num;
int maths,sci,eng;
void display_data()
{
cout<<"\nname:"<<name;
cout<<"\nroll num:"<<roll_num;
cout<<"\nmarks in maths:"<<maths;
cout<<"\nmarks in sci:"<<sci;
cout<<"\nmarks in eng:"<<eng;
}
};

int main()
{
    student s1;
    cout<<"\nenter the name";
    cin>>s1.name;
    cout<<"\nenter roll number";
    cin>>s1.roll_num;
    cout<<"\nenter marks in maths";
    cin>>s1.maths;
    cout<<"\nenter marks in sci";
    cin>>s1.sci;
    cout<<"\nenter marks in eng";
    cin>>s1.eng;
    s1.display_data();
    return 0;
}
