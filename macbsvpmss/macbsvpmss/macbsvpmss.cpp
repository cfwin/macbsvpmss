﻿#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include <opencv/cv.hpp>
#include<cstring>
#include "macbsvpmss.h"

char video[][100] ={
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\a2.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\t1.avi"
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\789759_6.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\790071_6.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\790100_5.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\790100_8.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\790292_5.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\790292_8.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\791745_7.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\791828_5.avi",
	"F:\\vs2005\\carDet\\IPMS-Test-Data\\791828_8.avi",
};
int main(int argc,char **argv)
{
	int start;
	int end;
	std::cout<<"input start and end:"<<std::endl;
	std::cin>>start;
	ExtractBackground(argv[2],start,end);
	//MobileDectect(argv[1],argv[2]);
}