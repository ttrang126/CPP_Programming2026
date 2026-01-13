#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring
{
    private:
        char *str;
    public:
        Mystring();
        Mystring(const char* s);       //Overloaded constructor
        Mystring(const Mystring& source);   //Copy constructor
        ~Mystring();

        void Display() const;
        int getLength() const;
        const char* getStr() const;
};

#endif