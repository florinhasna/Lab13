#ifndef _DATEADT_H_
#define _DATEADT_H_

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year);
        int get_day();
        int get_month();
        int get_year();
};

#endif