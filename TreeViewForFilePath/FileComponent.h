#pragma once
#include <iostream>
#include <string>

using namespace std;

class FileComponent
{
private:
	virtual ~FileComponent() = 0 {}
protected:
	const bool isReadOnly;
	const string Name;
public:
	FileComponent(const string nameObj, const bool isReadOnlyObj)
		: Name(nameObj), isReadOnly(isReadOnlyObj) {};
	virtual void Add(const FileComponent & const addFileObj) = 0;
	virtual void Delete(const FileComponent & const delFileObj) = 0;
	virtual void PrintTreeViewOnConsole() const = 0;
	virtual void DisplayChildItem(const int depth) const = 0;
	
};