#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>

#include "Vertex.h"

Vertex::Vertex(){}

Vertex::Vertex(float x, float y, float z){
        this->init(x,y,z);
    };
Vertex::Vertex(std::string &xyz){
    
    std::istringstream ss(xyz);
    std::string token;

    float x;
    float y;
    float z;
    
    std::getline(ss, token, ',');
    x = std::stof(token);
    std::getline(ss, token, ',');
    y = std::stof(token);
    std::getline(ss, token, ',');
    z = std::stof(token);
    this->init(x,y,z);
};

void Vertex::init(float x, float y, float z){
    this->SetX(x);
    this->SetY(y);
    this->SetZ(z);
};

void Vertex::SetX(float x) {
    this->x = x;
}
void Vertex::SetY(float y) {
    this->y = y;
}
void Vertex::SetZ(float z) {
    this->z = z;
}
float Vertex::GetX() const {
    return x;
}
float Vertex::GetY() const {
    return y;
}
float Vertex::GetZ() const {
    return z;
}
std::ostream& operator<<(std::ostream& os, const Vertex &obj) {
    os << "("  << std::fixed << std::setprecision(3) << obj.GetX() << "," << obj.GetY() << "," << obj.GetZ() << ")";
    return os;
}
