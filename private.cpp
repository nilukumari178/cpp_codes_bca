#include<iostream>
using namespace std;

class student{
string name;
int roll_num;
int maths,sci,eng;
public:
void getdata()
{

    cout<<"\nenter the name";
    getline(cin,name);
    cout<<"\nenter roll number";
    cin>>roll_num;
    cout<<"\nenter marks in maths";
    cin>>maths;
    cout<<"\nenter marks in sci";
    cin>>sci;
    cout<<"\nenter marks in eng";
    cin>>eng;
}
void display_data()

{
cout<<"\nname:"<<name;
cout<<"\nroll num:"<<roll_num;
for(int i=0)
}
};

int main()
{
    student s1;

    s1.getdata();
    s1.display_data();
    return 0;
}
