#ifndef CACTUS_H
#define CACTUS_H

#include <QLabel>

class Cactus {
public:
    Cactus();
    QPixmap pixmapCactus;

    /* Constants */
    static const int CACTUS_ICON_WIDTH = 150;
    static const int CACTUS_ICON_HEIGHT = 150;
    static const int CACTUS_GROUND_HEIGHT = 180;
    static const int CACTUS_GROUND_HORIZONTAL_START_POSITION = 800;
    static const int CACTUS_GROUND_HORIZONTAL_END_POSITION = -100;
};

#endif