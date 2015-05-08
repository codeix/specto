#include <iostream>
#include <expat.h>
#include <stdio.h>
#include <string.h>
#include "Camera.h"
#include "Vertex.h"


const std::string CAMERA_XML_ELMEMENT = "camera";


void startElement(void* userData, const char* name, const char** atts) {
    
    //Camera camera = new Camera();
    
    if (CAMERA_XML_ELMEMENT.compare(name) == 0){
        
        
        
        int i = 0;
        while(const char* attr_name = atts[i++]){
            std::string attr_value = atts[i++];
            std::string comp = attr_name;
            
            if (comp.compare("position") == 0){
                std::cout << Vertex(attr_value);
            }
        }
        
    }
    std::cout << "end";
}


void endElement(void* userData, const char* name) {
}


int data_loader(char* data_path) {
    FILE* fp;
    char* buffer;
    long fsize;
    XML_Parser parser;
    int userData = 0;
    int done;

    if ((fp = fopen(data_path, "r")) == NULL) {
        std::cerr << "Can't open \"" << data_path << "\"\n";
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);
    rewind(fp);

    buffer = (char*)malloc(fsize + 1);

    if(buffer == NULL)
        exit(2);

    fread(buffer, 1, fsize, fp);

    buffer[fsize] = '\0';

    printf("%s\n", buffer);
    fclose(fp);

    parser = XML_ParserCreate((XML_Char*)"UTF-8");
    XML_SetUserData(parser, &userData);
    XML_SetElementHandler(parser, startElement, endElement);

    if(!XML_Parse(parser, buffer, fsize, 0)) {
        fprintf(stderr,
                "%s at line %d\n",
                XML_ErrorString(XML_GetErrorCode(parser)),
                XML_GetCurrentLineNumber(parser));
        return 1;
    }


    XML_ParserFree(parser);
    
    return 0;
}


int main(int argc, char** argv) {
    if(argc != 2) {
        std::cerr << "Usage: specto [file]\n";
        return 1;
    }

    return data_loader(*++argv);
}
