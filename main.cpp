#include <iostream>

#include "errModule.h"
#include "module_test1/module_test1.h"
 
using namespace std;
 
int main(int argc, char **argv)
{
	unsigned int rt = 0;
	
	cout<<"initSuccess:"<<ec::initSuccess(0)<<endl;
	cout<<"initFail:"<<ec::initFail(0)<<endl;
	rt = ec::setModuleNum(0, 1);
	cout<<"setModuleNum:8:rt:"<<rt<<":getModuleNum:"<<ec::getModuleNum(rt)<<endl;
	rt = ec::setErrNum(rt, 1);
	cout<<"setErrNum:6:rt:"<<rt<<":getErrNum:"<<ec::getErrNum(rt)<<endl;
	cout<<"err string "<<ec::Desc(rt);

	return 0;
}
