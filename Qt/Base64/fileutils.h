#ifndef FILEUTILS
#define FILEUTILS


#include <iostream>
#include <fstream>

using namespace std;

class FileUtils{
public:
    static long readFileBytes(const char *name,char *data);
    static void saveFile(const char *name,const char *data,long size);
};
#endif // FILEUTILS

