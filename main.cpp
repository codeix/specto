#include <iostream>
#include <string.h>
#include "xmlreader.h"


int main(int argc, char** argv) {
    if(argc != 2) {
        std::cerr << "Usage: specto [file]\n";
        return 1;
    }

    return data_loader(*++argv);
}
