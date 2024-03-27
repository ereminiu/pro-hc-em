#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>
#include "ui/MainMenu.h"
#include "core/polygon.h"

using namespace std;


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 800), "Aboba");

    Polygon p1(100, 10, 10, 500, 100, 100, 255, 0, 0, 128);
    Polygon p2(100, 10, 100, 100,10, 500, 255, 0, 0, 128);
    Polygon p3(100, 100, 10, 500, 100, 10, 255, 0, 0, 128);
    vector<MyTriangle> v = {MyTriangle(p1), MyTriangle(p2), MyTriangle(p3)};

    game::MainMenu menu(window, v);

    menu.start();

    return 0;
}