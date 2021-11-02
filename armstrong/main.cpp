#include <iostream>
using namespace std;
#include <stdlib.h>

class armstrong
{
 public :
     int n,x,count,num,rem,sum;

void getdata()
{
    cout<<"Enter the number : ";
    cin>>num;
}

void countdigit()
{
    x=num;
    count=0;
    while(x>0)
    {
        x=x/10;
        count++
    }
}

void check()
{
    n=num;
    sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum*pow(rem,count);
        n=n/10;
    }
    if(sum==num)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";

}
};

int main()
{
    armstrong a1;
    a1.getdata();
    a1.countdigit();
    a1.check();
    return 0;
}
