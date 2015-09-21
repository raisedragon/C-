#ifndef BASE64CODER
#define BASE64CODER
#include <boost/archive/iterators/base64_from_binary.hpp>
#include <boost/archive/iterators/binary_from_base64.hpp>
#include <boost/archive/iterators/transform_width.hpp>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
class  Base64Coder{
public :
    static bool Base64Encode(const string& input, string* output) ;

    static bool Base64Decode(const string& input, string* output);
};

#endif // BASE64CODER

