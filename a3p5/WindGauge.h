/*
    CH08-320143
    a3p5
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/




#ifndef WINDGAUGE
#define WINDGAUGE

#include <iostream>

template <class T>
class WindGauge {
    public:
        WindGauge(int period = 10);
        void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;

    private:
	double operator*(const Vector&) const;	
		friend std::istream& operator>>(std::istream&, const Vector<int>&);

		friend std::ostream& operator<<(std::ostream&, const Vector<int>&);
    // add properties and/or method(s) here
};	

#endif
