#include <opencv2/core.hpp>
#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[])
{
	try
{
    //h=cv::Mat
}
catch( cv::Exception& e )
{
    const char* err_msg = e.what();
    std::cout << "exception caught: " << err_msg << std::endl;
}
	return 0;
}