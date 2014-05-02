#pragma once

//-----------------------------------------------------------------------------

#include <QString>
#include <QtXml>
#include <vector>

//-----------------------------------------------------------------------------

enum ProjectFileType {ptSource, ptExternal, ptExtra};

struct ProjectFile {
	QString name;
	bool open;
	ProjectFileType type;
};

//-----------------------------------------------------------------------------

using namespace std;

//-----------------------------------------------------------------------------

class Project
{
public:
	Project(void);
	~Project(void);

	void Clear(void);
	bool Load(QString workspace, QString filename);	
	void AddPath(QString & pathList, QString newPath);

	QString name;
	vector <ProjectFile> files;
	QString programmer;
	QString boardName;
	QString serialPort;
	QString includePaths;
	QString libPaths;
	QString srcPaths;
	QString libs;
	bool useCodeAutomation;
	int linkPrintfVersion;
	QString serialPortSpeed;

	
};

//-----------------------------------------------------------------------------

