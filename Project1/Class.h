#include <iostream>
#include <stdio.h>
#include <list>
#include <string>
#include <datetimeapi.h>

using namespace std;

namespace HN_DATETIME {
	class Comparable{
	public:
		virtual bool operator==(const Comparable &other)const;
		virtual bool operator!=(const Comparable &other)const; //returns false if the two objects are identical
		virtual bool operator<(const Comparable &other)const; // -- returns true if this object is less than other
		virtual bool operator<=(const Comparable &other)const; // -- returns true if this object is less than or equal to other
		virtual bool operator>(const Comparable &other)const; // -- returns true if this object is greater than other
		virtual bool operator>=(const Comparable &other)const; // -- returns true if this object is greater than or equal to other
		virtual void input(istream& sin); // -- inputs object info in proper form -- Could have a return type of istream&
		virtual void print(ostream& sout)const; // -- outputs object info in proper form -- Could have a return type of ostream&
	};

	class Date: virtual public Comparable {
	public:
		static const short minYear;;
		static const std::string startDay;
		static const short MIY;
		static const short DIW;


	protected:
		short year;
		short month;
		short dayOfMonth;
		short dayOfYear;
		short dayOfWeek;
	};
}
