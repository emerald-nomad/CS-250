#include "lab2_RecordManager.hpp"

RecordManager::~RecordManager() {
    for (int i = 0; i < MAX_FILES; i++)
    {
        if (m_outputs[i].is_open())
        {
            m_outputs[i].close();
        }
    }
}

void RecordManager::OpenOutputFile(string filename) {
    int index = FindAvailableFile();

    if (index == -1) {
        throw runtime_error("No available files to open.");
    }

    m_outputs[index].open(filename);
    m_filenames[index] = filename;
}

void RecordManager::CloseOutputFile(string filename) {
    int index = FindFilenameIndex(filename);

    if (index == -1) {
        throw runtime_error("No available files to close.");
    }

    m_outputs[index].close();
    m_filenames[index] = "";
}

void RecordManager::WriteToFile(string filename, string text) {
    int index = FindFilenameIndex(filename);

    if (index == -1) {
        throw runtime_error("No available files to write to.");
    }

    m_outputs[index] << text << endl;
}

void RecordManager::DisplayAllOpenFiles() noexcept {
    cout << "Open files: " << endl;
    for (int i = 0; i < MAX_FILES; i++) {
        if (m_outputs[i].is_open()) {
            cout << i << ". " << m_filenames[i] << endl;
        }
    }
}

int RecordManager::FindAvailableFile() {
    for (int i = 0; i < MAX_FILES; i++) {
        if (m_outputs[i].is_open() == false) {
            return i;
        }
    }
    return -1;
}

int RecordManager::FindFilenameIndex(string filename) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (m_filenames[i] == filename){
            return i;
        }
    }
    return -1;
}
