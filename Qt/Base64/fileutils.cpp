#include "fileutils.h"

#include <iostream>
#include <fstream>

using namespace std;

long FileUtils::readFileBytes(const char *name,char **buffer)
{
    ifstream infile (name,ifstream::binary);
    // get size of file
    infile.seekg (0,infile.end);
    long size = infile.tellg();
    infile.seekg (0);

    // allocate memory for file content
    *buffer = new char[size];

    // read content of infile
    infile.read (*buffer,size);

   // cout<<(*buffer)[size-1]<<endl;

    infile.close();
    return size;
}

void FileUtils::saveFile(const char* name,const char *data, long size)
{
    std::ofstream outfile (name,std::ofstream::binary);
    // write to outfile
    outfile.write (data,size);
    outfile.close();
}
