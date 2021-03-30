#include <iostream>
#include <cstring>
using namespace std;
struct String
{
    int n;
    char *str;
    String(const char* _str)
    {
        int i=0;
        while(_str[i] != '\0') i++;
        strcpy(str,_str);
        str[i]='\0';
        n=i;
    }
    ~String()
    {
        delete [] str;
    }
    void print()
    {
        for (char *cp = str; (*cp) != '\0'; cp++) cout << (*cp);
    }
    void append(const char* s)
    {
        char *temp;
        strcpy(temp,str);
        strncat(temp,s,5);
        str = temp;
    }
};

int main()
{
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();
}

