#ifndef _MYSTRING_H
#define _MYSTRING_H_

class Mystring
{
    private:
        char *str;
    public:
        Mystring();
        Mystring(const char* s);
        Mystring(const Mystring& source);
        ~Mystring();

        Mystring& operator=(const Mystring& rhs);

        void Display() const;
        int getLength() const;
        const char* getStr() const;
};

#endif