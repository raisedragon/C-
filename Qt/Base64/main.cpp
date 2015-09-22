#include "maindialog.h"
#include <QApplication>
#include <string>
#include <iostream>
#include <sstream>
#include "base64_coder.h"
#include "fileutils.h"

using namespace std;

void copyff();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog w;
    w.show();

    char data[1];
    long size = FileUtils::readFileBytes("E:\\tmp\\out.png",data);
    FileUtils::saveFile("E:\\tmp\\out2.png",data,size);
    //copyff();
    return a.exec();
}


void copyff(){
     std::ifstream infile ("E:\\tmp\\out-1442903975.png",std::ifstream::binary);
     std::ofstream outfile ("E:\\tmp\\out.png",std::ofstream::binary);

     // get size of file
     infile.seekg (0,infile.end);
     long size = infile.tellg();
     infile.seekg (0);

     // allocate memory for file content
     char* buffer = new char[size];

     // read content of infile
     infile.read (buffer,size);

     // write to outfile
     outfile.write (buffer,size);

     // release dynamically-allocated memory
     delete[] buffer;

     outfile.close();
     infile.close();
}
