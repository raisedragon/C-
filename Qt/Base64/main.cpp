#include "main_dialog.h"
#include <QApplication>
#include <string>
#include <iostream>
#include <sstream>
#include <base64_coder.h>

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog w;
    w.show();


    string input_str("MoreWindows - http://blog.csdn.net/morewindows?viewmode=contents ~!@#$%\r\n");
      string base64_str, output_str;

      cout<<"origin text: \n"<<input_str<<endl;

      Base64Coder::Base64Encode(input_str, &base64_str);
      cout<<"encode: \n"<<base64_str<<endl;

      Base64Coder::Base64Decode(base64_str, &output_str);
      cout<<"decode: \n"<<output_str<<endl;

    return a.exec();
}
