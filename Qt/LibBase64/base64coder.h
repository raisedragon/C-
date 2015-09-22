#ifndef BASE64CODER_H
#define BASE64CODER_H


class Base64Coder
{
public:
    static long encode(char *data,char **code);
    static long dncode(char *code,char **data);
};

#endif // BASE64CODER_H
