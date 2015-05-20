#ifndef CAMERA_H
#define CAMERA_H
#include <string.h>
#include "Vertex.h"

class Camera
{
private:
    Vertex position;
    Vertex image;
    float width;
    float height;
    int dpi;

public:
    Camera();
    Camera(Vertex position, Vertex image, float width, float height, int dpi);

    void SetDpi(int dpi);
    void SetHeight(float height);
    void SetImage(const Vertex& image);
    void SetPosition(const Vertex& position);
    void SetWidth(float width);
    int GetDpi() const;
    float GetHeight() const;
    const Vertex& GetImage() const;
    const Vertex& GetPosition() const;
    float GetWidth() const;
};

std::ostream& operator<<(std::ostream& os, const Camera &obj);

#endif // CAMERA_H
