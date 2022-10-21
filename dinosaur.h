#ifndef DINOSAUR_H
#define DINOSAUR_H

#include <QLabel>
#include <QtDebug>
#include <QPropertyAnimation>

/* Record whether the dinosaur has stepped left/right foot the last time. */
typedef enum {
   DINOSAUR_STEP_LEFTFOOT,
   DINOSAUR_STEP_RIGHTFOOT
} eDinosaurStepFoot;

class Dinosaur
{
public:
    Dinosaur();

    /* Constants */
    static const int DINOSAUR_ICON_WIDTH = 100;
    static const int DINOSAUR_ICON_HEIGHT = 100;
    static const int DINOSAUR_JUMP_PEAK_HEIGHT = 20;
    static const int DINOSAUR_GROUND_HEIGHT = 200;
    static const int DINOSAUR_GROUND_HORIZONTAL_POSITION = 100;

    QPixmap pixmapDinosaur, pixmapDinosaurLeftFootUp, pixmapDinosaurRightFootUp;

public slots:
    void dinosaurJumpTimeoutHandler();
    eDinosaurStepFoot dinosaurFootAction;
};

#endif // DINOSAUR_H