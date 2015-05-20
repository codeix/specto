#include "Camera.h"
#include "Vertex.h"


Camera::Camera(){};

Camera::Camera(Vertex position, Vertex image, float width, float height, int dpi):
    position(position), image(image), width(width), height(height), dpi(dpi){
}


void Camera::SetDpi(int dpi)
{
    this->dpi = dpi;
}
void Camera::SetHeight(float height)
{
    this->height = height;
}
void Camera::SetImage(const Vertex& image)
{
    this->image = image;
}
void Camera::SetPosition(const Vertex& position)
{
    this->position = position;
}
void Camera::SetWidth(float width)
{
    this->width = width;
}
int Camera::GetDpi() const
{
    return dpi;
}
float Camera::GetHeight() const
{
    return height;
}
const Vertex& Camera::GetImage() const
{
    return image;
}
const Vertex& Camera::GetPosition() const
{
    return position;
}
float Camera::GetWidth() const
{
    return width;
}
std::ostream& operator<<(std::ostream& os, const Camera &obj) {
    os << "<Camera(" 
    << "\n\b    position: " << obj.GetPosition() << ")"
    << "\n\b    image: " << obj.GetImage() << ")"
    << "\n\b    width: " << obj.GetWidth() << ")"
    << "\n\b    height: " << obj.GetHeight() << ")"
    << "\n\b    dpi: " << obj.GetDpi() << ")"
    << "\n\b)";




    return os;
}
