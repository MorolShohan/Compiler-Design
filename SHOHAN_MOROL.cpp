#include<iostream>
using namespace std;


void isNum()
{
    string s;
    cout<<"Enter any string"<<endl;
    cin>>s;
for(int i=0;i<s.length();i++)

if(s[i]<48||s[i]>57)
    cout<<s<< " Is Not a Number"<<endl;

else
cout<<s<< " Is a number ";
}

void operatorcheck()
{
    char o;
    cout<<"Enter any operator "<<endl;
    cin>>o;
    if(o == '+'|| '-' || '*' || '/' || '%'|| '=' || '+=' || '-=' || '*='|| '/=' || '%=' || '==' || '!=' || '>' || '<' || '>=' || '<=' || '&&'|| '||' || '!' || '&' || '|' || '^' || '~' || '<<' || '>>')
    cout<<o<<" is a  Operator"<<endl;
    else
    cout<<"Not a Operator"<<endl;
}

int main()
{
    isNum();
    operatorcheck();

}
