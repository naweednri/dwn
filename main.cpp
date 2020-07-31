#include <iostream>
#include "file.h"

using std::cout;
using std::endl;

int main()
{
    std::string cmnd;
    bool exit=0;
    while(!exit)
    {
        cout<<"> ";
        std::cin>>cmnd;
    }
    return 0;
}