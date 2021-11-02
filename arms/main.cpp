#include <iostream>
#include <math.h>
using namespace std;


class armstrong
{
 public :
     int n,count,num,rem,sum;

/*void getdata()
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
        count++;
    }
}*/

void check()
{
    cout<<"Enter the number : ";
    cin>>num;
    n=num;
    count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }

    n=num;
    sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
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
    //a1.getdata();
    //a1.countdigit();
    a1.check();
    return 0;
}
