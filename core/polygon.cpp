//
// Created by ivan on 27.03.24.
//

#include "polygon.h"

Polygon::Polygon(int x1, int y1, int x2, int y2, int x3, int y3, int r, int g, int b, int a)
    :red(r), green(g), blue(b), alpha(a) {
    xCoord = vector<int>{x1, x2, x3};
    yCoord = vector<int>{y1, y2, y3};
}
