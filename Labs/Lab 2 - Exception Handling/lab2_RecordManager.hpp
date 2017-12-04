#ifndef lab2_RecordManager_hpp
#define lab2_RecordManager_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

class RecordManager {
public:
    ~RecordManager();

    void OpenOutputFile(string filename);
    void CloseOutputFile(string filename);
    void WriteToFile(string filename, string text);
    void DisplayAllOpenFiles() noexcept;

private:
    int FindAvailableFile();
    int FindFilenameIndex(string filename);

    ofstream m_outputs[5];
    string m_filenames[5];
    const int MAX_FILES = 5;
};

#endif /* lab2_RecordManager_hpp */
