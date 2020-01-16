#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i=0;
    label:
        cout<<s[i];
        int counter=1;
        while(s[i]==s[i+1] && i < s.length()-1)
        {
            counter++;
            i++;
        }
        cout<<counter;
        i++;
        while(i<s.length())goto label;
        return 0;

}
