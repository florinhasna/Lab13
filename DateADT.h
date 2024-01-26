#ifndef _DATEADT_H_
#define _DATEADT_H_
#include <string>

class Date 
{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year);
        int get_day();
        int get_month();
        int get_year();
        std::string get_date();
};

#endif