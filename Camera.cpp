#include "Camera.h"
#include "Vertex.h"


Camera::Camera(Vertex position, Vertex image, float width, float height, int dpi):
    position(position), image(image), width(width), height(height), dpi(dpi){
}
