//
// Created by ivan on 27.03.24.
//

#include <bits/stdc++.h>
using namespace std;

#ifndef PRO_HC_EM_POLYGON_H
#define PRO_HC_EM_POLYGON_H

class Polygon {
public:
    vector<int> xCoord;
    vector<int> yCoord;
    int red, green, blue, alpha;

    Polygon(int x1, int y1, int x2, int y2, int x3, int y3, int r, int g, int b, int a);
};

#endif //PRO_HC_EM_POLYGON_H
