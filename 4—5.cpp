#include<iostream>
#include<cfloat>
using namespace std;
int main()
{
	const double C(299792458.0);
	const int NUMBER_OF_SATELLITES(4);
	int satID, minID;
	double tTime ,pRange, minPRange(DBL_MAX);
	cout << "Enter id and transit time for"
		<< NUMBER_OF_SATELLITES << " satellites:\n"
		<< "Use whitespace to separate the value(ie: 25 0.00257)\n"
		<< endl;
	for (int i = 1; i <= NUMBER_OF_SATELLITES; ++i)
	{
		cin >> satID >> tTime;
		pRange = tTime * C;
		if (pRange < minPRange)
		{
			minPRange = pRange;
			minID = satID;
		}
		cout << "Satellite" << satID << "has a pseudorange of"
			<< pRange << "m\n " << endl;
	}
	cout << "\nSatellite" << minID
		<< "is closet to GPS receiver." << endl;
	return 0;
}
