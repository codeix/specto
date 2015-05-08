#ifndef CAMERA_H
#define CAMERA_H
#include <string.h>
#include "Vertex.h"

class Camera {
    private:
        Vertex position;
        Vertex image;
        float width;
        float height;
        int dpi;
    public:
        Camera(Vertex position, Vertex image, float width, float height, int dpi);
};

#endif // CAMERA_H
