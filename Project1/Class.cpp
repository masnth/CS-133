#include "P1.h"

using namespace std;


//define namespace
namespace HN_DATETIME {
	class Comparable{
	int myVar;
	public:
		virtual bool operator==(const Comparable &other)const {return myVar == other.myVar;}
		virtual bool operator!=(const Comparable &other)const {return myVar != other.myVar;}
		virtual bool operator<(const Comparable &other)const {return myVar < other.myVar;}
		virtual bool operator<=(const Comparable &other)const {return myVar <= other.myVar;}
		virtual bool operator>(const Comparable &other)const {return myVar > other.myVar;}
		virtual bool operator>=(const Comparable &other)const {return myVar >= other.myVar;}
		virtual void input(istream& sin) {myVar = (int)sin.get();} 
		virtual void print(ostream& sout)const {sout << myVar;}
	};

	class Date{
	protected:
		short m_year;
		short m_month ;
		short m_dayOfMonth;
		short dayOfYear;
		short dayOfWeek;

	public: 
		const minYear = 1760;
		const startDOW = 1;   // 0: Monday -> 7:Sunday
		const MIY = 12;
		const DIY = 7;

		Date(short dayOfMonth, short month, short year) {
			setCurrentDate();
			if (month > 0 && month <= 12) m_month = month;
			if (year >= 1760) m_year = year;
			if (dayOfMonth > 0 && dayOfMonth <= daysInMonth(month)) m_dayOfMonth = dayOfMonth; 
		}
		
		bool operator==(const Date &other) {
			if (m_year == other.m_year && m_month == other.m_month && m_dayOfMonth == other.m_dayOfMonth)
				return true;
			else
				return false;
		}


		static short daysInMonth(short month) {
			if ((month % 2 == 0 && month <= 7) || (month % 2 == 1 && month > 7))
				return 30;
			else 
				return 31;
		}
		
		void setCurrentDate() {
			const short BASE_YEAR = 1900;
			time_t rawtime;
			tm *currentTimePtr;
			time(&rawtime);
			currentTimePtr = localtime(&rawtime);

			m_year = currentTimePtr->tm_year + BASE_YEAR;
			m_month = currentTimePtr->tm_mon;
			m_dayOfMonth = currentTimePtr->tm_mday;
		}

	};
}
