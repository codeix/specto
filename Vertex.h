#ifndef VERTEX_H
#define VERTEX_H
#include <string>
#include <ostream>
#include "Vertex.h"

class Vertex
{
private:
    float x;
    float y;
    float z;
    void init(float x, float y, float z);

public:
    Vertex();
    Vertex(float x, float y, float z);
    Vertex(std::string& xyz);
    
    void SetX(float x);
    void SetY(float y);
    void SetZ(float z);
    float GetX() const;
    float GetY() const;
    float GetZ() const;
};

std::ostream& operator<<(std::ostream& os, const Vertex& obj);

#endif // VERTEX_H
