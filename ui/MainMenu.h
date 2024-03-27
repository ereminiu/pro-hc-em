//
// Created by ivan on 27.03.24.
//

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>
#include "triangle.h"

using namespace std;

#ifndef PRO_HC_EM_MAINMENU_H
#define PRO_HC_EM_MAINMENU_H

namespace game {
    class MainMenu {
public:
    MainMenu(sf::RenderWindow &w, vector<MyTriangle> &t) :_window(w), triangles(t) {
    }
    void start() {
        while (_window.isOpen()) {
            sf::Event event{};
            while (_window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    cout << "closing window" << endl;
                    _window.close();
                }
            }
            _window.clear();
            drawTriangles();
            _window.display();
        }
    }
private:
    vector<MyTriangle> &triangles;
    sf::RenderWindow &_window;

    void drawTriangles() {
        for (auto t : triangles) {
            _window.draw(t.GetTriangles());
        }
    }
};
}

#endif //PRO_HC_EM_MAINMENU_H
