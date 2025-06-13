#include<iostream>
using namespace std;

class task
{
    string taskname;
    string deadline;

public:
    task(string t,string d="not assigned")
    {
        taskname=t;
        deadline=d;
    }
    void display()
    {
        cout<<"taskname:"<<taskname<<endl;
        cout<<"deadline:"<<deadline<<endl;
    }
};
int main()
{
    task t1("project","twenty");
    t1.display();
    return 0;
}
