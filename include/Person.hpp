#ifndef __PERSON_H__
#define __PERSON_H__

#include <bits/stdc++.h>

class Person
{
    private:
        std::string firstName;
        std::string lastName;
        int arbitraryNumber;
    public:
        Person(std::string first, std::string last, int arbitrary);
        Person();
        ~Person();
        std::string getName() const;
        int getNumber() const {return arbitraryNumber;}
        void setNumber(int n){arbitraryNumber = n;}
        bool operator < (Person const& p) const;
        bool operator < (int n) const;
};

bool operator < (int n, Person const& p);

#endif // __PERSON_H__