#include<iostream>
using namespace std;

int main()
{
    struct employee
    {
      char name[30];
      int employee_id;
    };
    union data{
        char ch[2];
        int i;
    };
    enum status{married,unmarried,divorced};
    employee e;
    data d;
    status s;
}