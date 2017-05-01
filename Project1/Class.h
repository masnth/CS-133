#include <iostream>
#include <stdio.h>
#include <list>
#include <string>
#include <datetimeapi.h>
#include <ctime>

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
		static const short startDOW;
		static const short MIY;
		static const short DIW;

		Date(short dayOfMonth, short month, short year); //This is class constructor 
		
		bool operator==(const Date &other);
		bool operator!=(const Date &other);
		bool operator<(const Date &other);
		bool operator<=(const Date &other);
		bool operator>(const Date &other);
		bool operator>=(const Date &other);

		void print(ostream& sout);
		void input(istream& sin);
		void setCurrentDate();

		static bool isLeapYear(short year);
		static short daysInMonth(short month);
		static string monthNames(short month);
		static string dayNames(short dayOfWeek);

		Date yesterday();
		Date tomorrow();
		
		short getYear();
		short getMonth();
		short getdayOfMonth();
		short getdayOfYear();
		short getdayOfWeek();

		void setYear();
		void setMonth();
		void setDayofMonth();
	
	private:
		static short countLeaps(short year);
		void setDayOfYear();
		void setDayOfWeek();

	};


}
