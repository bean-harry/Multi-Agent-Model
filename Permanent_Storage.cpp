/* Model_Calculations.cpp */

#include <stdio.h>
#include <vector>
#include <boost/mpi.hpp>
#include "repast_hpc/RepastProcess.h"
#include "repast_hpc/Utilities.h"
#include "repast_hpc/Properties.h"

#include "Model_Calculations.h"
#include "Permanent_Storage.h"

//Use the default constructor
void Permenant_Storage::Permenant_Storage()
{

}

void Permenant_Storage::recordResults()
{
	if(repast::RepastProcess::instance()->rank() == 0){
		props->putProperty("Result","Passed");
		std::vector<std::string> keyOrder;
		keyOrder.push_back("RunNumber");
		keyOrder.push_back("stop.at");
		keyOrder.push_back("Result");
		props->writeToSVFile("./output/Agent_Changes.csv", keyOrder);
}

void Permenant_Storage::retrievePropertiesLog()
{
	




}




	
