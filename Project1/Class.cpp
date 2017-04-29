#include "Class.h"

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


}
