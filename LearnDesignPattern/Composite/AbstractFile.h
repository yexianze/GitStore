#ifndef ABSTRACTFILE_H
#define ABSTRACTFILE_H

class AbstractFile
{
public:
	AbstractFile(){}
	virtual ~AbstractFile(){}

	//
	virtual void add(AbstractFile* file) = 0;
	//
	virtual void remove(AbstractFile* file) = 0;
	//
	virtual AbstractFile* getChild(int i) = 0;
	//
	virtual void killVirus() = 0;
};

#endif
