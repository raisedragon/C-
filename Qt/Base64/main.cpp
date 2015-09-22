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

    char *data;
    long size = FileUtils::readFileBytes("E:\\tmp\\out.jpg",&data);

    string in(data,size);
    string out;
    Base64Coder::Base64Encode(in,&out);

    cout<<"base64 start"<<endl<<out<<endl<<"base64 end"<<endl;

    FileUtils::saveFile("E:\\tmp\\out2.jpg",data,size);
    //copyff();
    return a.exec();
}
