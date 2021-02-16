#include <iostream>
using namespace std;

int main()
{
  const int AT_BAT = 421;
  const int HITS = 123;
	double batAvg;

	batAvg = HITS / AT_BAT;									// an assignment statement 
  batAvg = static_cast<double>(HITS) / AT_BAT;

	cout << "The batting average is " << batAvg << endl;	// output the result

}