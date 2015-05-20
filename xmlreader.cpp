#include <iostream>
#include <expat.h>
#include <stdio.h>
#include <string.h>
#include "Camera.h"
#include "Vertex.h"



const std::string CAMERA_XML_ELMEMENT = "camera";
const std::string CAMERA_XML_ATTR_POSITION = "position";
const std::string CAMERA_XML_ATTR_IMAGE = "image";
const std::string CAMERA_XML_ATTR_WIDTH = "width";
const std::string CAMERA_XML_ATTR_HEIGHT = "height";
const std::string CAMERA_XML_ATTR_DPI = "dpi";


void startElement(void* userData, const char* name, const char** atts) {
    
    //Camera camera = new Camera();
    
    if (CAMERA_XML_ELMEMENT.compare(name) == 0){

        Vertex position;
        Vertex image;
        int width;
        int height;
        int dpi;


        int i = 0;
        while(const char* attr_name = atts[i++]){
            std::string attr_value = atts[i++];
            std::string comp = attr_name;
            
            if (comp.compare(CAMERA_XML_ATTR_POSITION) == 0)
                position = Vertex(attr_value);
            if (comp.compare(CAMERA_XML_ATTR_IMAGE) == 0)
                image = Vertex(attr_value);
            if (comp.compare(CAMERA_XML_ATTR_WIDTH) == 0)
                width = std::stoi(attr_value);
            if (comp.compare(CAMERA_XML_ATTR_HEIGHT) == 0)
                height = std::stoi(attr_value);
            if (comp.compare(CAMERA_XML_ATTR_DPI) == 0)
                dpi = std::stoi(attr_value);
        }

        std::cout << Camera(position, image, width, height, dpi); 
        
    }
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
