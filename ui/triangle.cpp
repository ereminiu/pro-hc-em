//
// Created by ivan on 27.03.24.
//

#include "triangle.h"
#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

MyTriangle::MyTriangle(Polygon &p) {
    triangle = triangleFromPolygon(p);
}

sf::VertexArray MyTriangle::GetTriangles() {
    return this->triangle;
}

sf::VertexArray MyTriangle::triangleFromPolygon(Polygon &p) {
    assert(p.xCoord.size() == 3);
    assert(p.yCoord.size() == 3);

    sf::VertexArray result(sf::Triangles, 3);
    result[0].position = sf::Vector2f(float(p.xCoord[0]), float(p.yCoord[0]));
    result[1].position = sf::Vector2f(float(p.xCoord[1]), float(p.yCoord[1]));
    result[2].position = sf::Vector2f(float(p.xCoord[2]), float(p.yCoord[2]));
    for (int i = 0; i < 3; i++) {
        result[i].position = sf::Vector2f(float(p.xCoord[i]), float(p.yCoord[i]));
        result[i].color = sf::Color(p.red, p.green, p.blue, p.alpha);
    }

    return result;
}