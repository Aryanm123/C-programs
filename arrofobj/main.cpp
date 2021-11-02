#include <iostream>

using namespace std;

class student
{
    int roll;
    float per;
public:
    void input()
    {
        cout<<"Enter the Roll and Percentage :"<<endl;
        cin>>roll>>per;
    }

    void display()
    {
        cout<<"Roll : "<<roll<<"\t"<<"Percentage : "<<per<<endl;
    }
};
int main()
{
    student s[10];
    int n,i;
    cout<<"Enter the size : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        s[i].input();

    for(i=0;i<n;i++)
        s[i].display();
    return 0;
}
