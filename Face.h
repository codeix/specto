#ifndef FACE_H
#define FACE_H

#include "Vertex.h"
#include "Color.h"


class Face
{

private:
    Vertex alpha;
    Vertex beta;
    Vertex gamma;
    Color color;

public:
    Face();
    Face(Vertex alpha, Vertex beta, Vertex gamma, Color color);

    void SetAlpha(const Vertex& alpha);
    void SetBeta(const Vertex& beta);
    void SetGamma(const Vertex& gamma);
    void SetColor(const Color& color);
    const Vertex& GetAlpha() const;
    const Vertex& GetBeta() const;
    const Vertex& GetGamma() const;
    const Color& GetColor() const;
};

std::ostream& operator<<(std::ostream& os, const Face &obj);

#endif // FACE_H
