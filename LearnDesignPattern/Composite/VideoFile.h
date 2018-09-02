#ifndef VIDEOFILE_H
#define VIDEOFILE_H
#include "AbstractFile.h"
#include <iostream>

class VideoFile : public AbstractFile
{
public:
	VideoFile(const std::string& name)
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
		std::cout<<"------Video File'"<<m_name<<"'KillVirus"<<std::endl;
	}	

private:
	std::string m_name;
};

#endif
