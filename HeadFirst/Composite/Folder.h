#ifndef FOLDER_H
#define FOLDER_H
#include "AbstractFile.h"
#include <iostream>
#include <vector>
#include <algorithm>

class Folder : public AbstractFile
{
public:
	Folder(const std::string& name)
	{
		m_name = name;
	}
	//
	virtual void add(AbstractFile* file)
	{
		m_files.push_back(file);
	}
	//
	virtual void remove(AbstractFile* file)
	{
		std::vector<AbstractFile*>::iterator iter = std::find(m_files.begin(),m_files.end(),file);
		if (iter != m_files.end())
		{
			m_files.erase(iter);
		}
	}
	//
	virtual AbstractFile* getChild(int i)
	{
		if (i<0 || i>m_files.size()-1)
		{
			return NULL;
		}
		return m_files[i];
	}
	//
	virtual void killVirus()
	{
		std::cout<<"******Folder'"<<m_name<<"'KillVirus"<<std::endl;
		std::vector<AbstractFile*>::iterator iter = m_files.begin();
		for (; iter!=m_files.end(); ++iter)
		{
			(*iter)->killVirus();
		} 
	}	

private:
	std::string m_name;
	std::vector<AbstractFile*> m_files;
};

#endif
