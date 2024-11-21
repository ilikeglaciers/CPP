#include<iostream>
#include<string>
using namespace std;

class Sample
    {
     public:
     int myNum;
     string myString;  
    };
int main()
{
    Sample obj;
    obj.myNum=15;
    obj.myString="hello";
    cout<<obj.myNum<<"\n";
    cout<<obj.myString;
    return 0;
}