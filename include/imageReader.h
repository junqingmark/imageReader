#ifndef _IMAGE_READER_H_
#define _IMAGE_READER_H_

#include <iostream>
#include <string>

using namespace std;

class imageReader
{
public:
	static imageReader* createInstance();
	static void releaseInstance();
	char* loadImage(string& fileName);
	unsigned long getImageWidth();
	unsigned long getImageHeight();
	int getImageDepth();

private:
	imageReader();
	~imageReader();
	static imageReader* readerInstance;
	unsigned long m_width;
	unsigned long m_height;
	int m_depth;
	
};

#endif