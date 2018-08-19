#ifndef TEXTFILE_H
#define TEXTFILE_H
#include "AbstractFile.h"
#include <iostream>

class TextFile : public AbstractFile
{
public:
	TextFile(const std::string& name)
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
		std::cout<<"------Text File'"<<m_name<<"'KillVirus"<<std::endl;
	}	

private:
	std::string m_name;
};

#endif
