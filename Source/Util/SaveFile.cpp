#include "Util/SaveFile.h"

SaveFile::SaveFile(const char* file_location)
{
    this->file_location = file_location;

    this->output_file.open(this->file_location, std::ios::out | std::ios::trunc);

    if(!output_file.is_open())
    {
        throw std::runtime_error("Unable to open save file!");
    }
}

SaveFile::~SaveFile()
{
    close();
}

void SaveFile::read()
{
    if(output_file.is_open())
    {
        std::cout << "Cannot read file while saving to file!\n";

        throw std::invalid_argument("File read failure.");
    }

    
}

void SaveFile::append(std::string context)
{
    output_file << context;
}

void SaveFile::close()
{
    if(output_file.is_open())
    {
        output_file.close();
    }
}