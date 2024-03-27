//
// Created by ivan on 27.03.24.
//

#include <SFML/Graphics.hpp>
#include <bits/stdc++.h>
#include "../core/polygon.h"

#ifndef PRO_HC_EM_TRIANGLE_H
#define PRO_HC_EM_TRIANGLE_H

class MyTriangle {
    sf::VertexArray triangle;
public:
    MyTriangle(Polygon &p);

    sf::VertexArray GetTriangles();

private:
    static sf::VertexArray triangleFromPolygon(Polygon &p);
};

#endif //PRO_HC_EM_TRIANGLE_H
