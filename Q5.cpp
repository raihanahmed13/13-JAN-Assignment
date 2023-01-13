#include <iostream>
#include <string>
using namespace std;
class student
{
    int age;
    string name, add;

public:
    student()
    {
        name = "unknown";
        age = 0;
        add = "not available";
    }

    void setinfo(char nam[20], int ag)
    {
        name = nam;
        age = ag;
        cout << "Details of student is" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    void setinfo(string nam, int ag, string addres)
    {
        name = nam;
        age = ag;
        add = addres;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address : " << add << endl;
    }
};
int main()
{
    int j = 2;
    student s[j];
    int age;
    string name, add;
    cout << "Enter Details of Students" << endl;

    for (int i = 0; i < j; i++)
    {
        cout << "Enter details of " << i + 1 << " Student" << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Age : ";
        cin >> age;
        cout << "Address : ";
        cin >> add;
        s[i].setinfo(name, age, add);
        cout << endl;
    }
    cout << "Displaying Details of Students Entered" << endl;

    for (int i = 0; i < j; i++)
    {
        cout << "Details of " << i + 1 << " Student is" << endl;
        s[i].display();
    }
}