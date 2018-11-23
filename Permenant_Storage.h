/* Permenant_Storage.h */

#include "Model_Calculations.h"
#include <vector>

class Permenant_Storage
{
private:
	Permenant_Storage
	std::vector<double> Interval_Time;
	std::vector<double> Agent_Number;
	std::vector<double> Agent_Value;
    
    
public:
	void writeLogToCSVFile();
	void retrievePropertiesLog();

};


