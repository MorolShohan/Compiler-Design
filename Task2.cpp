#include <iostream>
#include <fstream>
using namespace std;


bool isNumeric(string word)
{
    for(int i=0; i<word.length(); i++)
    {
        if(word[i]<'0'||word[i]>'9')
        {
            return false;
        }
    }
    return true;
}
void checkKW(string word)//check key
{
    if(word[0]>='0'&& word[0]<='9')
    {
        if(isNumeric(word))
        {
            cout<<word<<" is a numeric identifier."<<endl;
        }
        else
        {
            cout<<word<<" is an invalid identifier."<<endl;
        }
    }
    else if(word=="float"||word=="int"||word=="string"||word=="double"||word=="char"||word=="bool")
    {
        cout<<word<<" is a keyword."<<endl;
    }
    else
    {
        //bool isIdentifier=false;
        //for(int i=0; i<word.length; i++)
        {
            //char c=word[i];
            //if(c=='@'||c=='#'||c=='$'||c==''||c=='~'||c=='@'||)
        }
        cout<<word<<" is a valid identifier."<<endl;
    }

}
void isOP(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='^'||c=='=')
    {
        cout<<c<<" is an operator."<<endl;
        return;
    }
    else
    {
        cout<<c<<" is not an operator."<<endl;
    }
}

void lexicalAnalysis(string line)
{
    string word;
    for(int i=0; i<line.length(); i++)
    {
        char c=line[i];
        if(c==' ')
        {
            checkKW(word);//check key word
            word="";
        }
        else if ((c>='a' && c<='z')||(c>='A' && c<='Z')||(c>='0' && c<='9')||c=='_')
        {
            word+=c;
        }
        else
        {
            checkKW(word);//check key
            isOP(c);// check operator
            word="";
        }
    }
    if(word!="")
    {
        checkKW(word);
    }

    cin>>line;

}

int main()
{
    fstream new_file;
    new_file.open("cd_file.txt",ios::in);
    if(!new_file)
    {
        cout<<"No such file";
    }
    else
    {
        string line;
        while (!new_file.eof())
        {
            new_file>>line;
            getline(new_file, line);
            cout << line;
            lexicalAnalysis(line);
        }
    }
    new_file.close();

    char n;
    cin>>n;
    return 0;
}
