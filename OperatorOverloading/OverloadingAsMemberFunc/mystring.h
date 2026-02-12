#ifndef _Mystring_H_
#define _Mystring_H_

class Mystring
{
    private:
        char* str;

    public:
        Mystring();       
        Mystring(const char* s);                //Overloaded Constructor
        Mystring(const Mystring& source);       //Copy Constructor
        Mystring(Mystring&& source);            //Move Constructor
        ~Mystring();

        Mystring &operator=(const Mystring& rhs);       //Copy assignment
        Mystring &operator=(Mystring&& rhs);            //Move assignment

        Mystring operator-() const;                         //Make lowercase
        Mystring operator+(const Mystring& rhs) const;      //Concatenate
        bool operator==(const Mystring& rhs) const;

        void Display() const;
        int getLength() const;
        const char* getStr() const;
};

#endif