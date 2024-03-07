#ifndef SAVEFILE_HPP_INCLUDED
#define SAVEFILE_HPP_INCLUDED 1
#include <iostream>
#include <fstream>
#include <filesystem>
#include <sstream>

class SaveFile
{
public:
    SaveFile(const char* file_location);
    ~SaveFile();

    void read();
    void append(std::string context);
    void close();

private:
    std::string file_location;
    std::ifstream input_file;
    std::ofstream output_file;
};

#endif