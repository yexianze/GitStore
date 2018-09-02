#ifndef IMAGEFILE_H
#define IMAGEFILE_H
#include "AbstractFile.h"
#include <iostream>

class ImageFile : public AbstractFile
{
public:
	ImageFile(const std::string& name)
	{
		m_name = name;
	}
	//
	virtual void add(AbstractFile* file) {}
	//
	virtual void remove(AbstractFile* file) {}
	//
	virtual AbstractFile* getChild(int i) {return NULL;}
	//
	virtual void killVirus()
	{
		std::cout<<"------Image File'"<<m_name<<"'KillVirus"<<std::endl;
	}	

private:
	std::string m_name;
};

#endif
