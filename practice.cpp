#include<iostream>
#include<fstream>
using namespace std;

class student{
public:
    string name;
    int marks;

 void get_info()
 {
     cout<<"enter the name:";
     getline(cin>>ws,name);
     cout<<"enter the marks of student:";
     cin>>marks;
 }

};
int main()
{
    ofstream out("C:\\Users\\win\\OneDrive\\Documents\\BCA SEMESTER-2.txt",ios::app);
    if(!out.is_open())
    {
        cout<<"error in opening file"<<endl;
        return 0;
    }
    student s[5];
    int n;
    cout<<"enter how many data you want to enter:";
    cin>>n;

    for(int i=0;i<5;i++)
    {
        s[i].get_info();
        out<<s[i].name<<"\t"<<s[i].marks<<endl;

    }
    out.close();
    ifstream readfile("C:\\Users\\win\\OneDrive\\Documents\\BCA SEMESTER-2.txt");
    string line;
    if(!out.is_open())
    {
        cout<<"error in opening file"<<endl;
        return 0;
    }

    while(!readfile.eof())
    {
        getline(readfile,line);
        cout<<line<<endl;
    }
    readfile.close();
    return 0;
}
