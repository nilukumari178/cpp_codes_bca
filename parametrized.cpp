#include<iostream>
using namespace std;

class deliveryAgent
{
    string name;
    string zone;

public:
    deliveryAgent(string n,string z)
    {
        name=n;
        zone=z;
    }
    void display_details()
    {
        cout<<"name:"<<name<<endl;
        cout<<"zone:"<<zone<<endl;
    }
};
int main()
{
    deliveryAgent d1("rohan","eastdelhi"),d2("ram","northdelhi");
    d1.display_details();
    d2.display_details();
    return 0;
}
