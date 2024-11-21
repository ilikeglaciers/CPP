#include<iostream>
#include<string>
using namespace std;

int main()
{
    string one = "number one";
    string two = "number two";
    cout<<one+"\n"+two+"\n";

    string x = "10";
    string y = "20";
    cout<<"\n"+x+y+"\n";

    int z = 10;
    string p = "iamstring";
    //cout<<z+p;
    //error occurs if you add a string with an int

    cout<<p.length()+"\n";
    cout<<p.size();
    //calculates the length of a string

    cout<<p[0]+"\n";
    //access string using its index

    cout<<p[p.length()-1];
    //This code can be used to print the last character of a string

    cout<<x.at(0);
    //returns the character at the given index

    return 0;
}