#include "dinosaur.h"
#include "mainwindow.h"

Dinosaur::Dinosaur()
{
    /* Load all picture resources as pixels. */
    pixmapDinosaur = QPixmap(":/media/icons/dino.png");
    pixmapDinosaurLeftFootUp = QPixmap(":/media/icons/dino_LeftFootUp.png");
    pixmapDinosaurRightFootUp= QPixmap(":/media/icons/dino_RightFootUp.png");

    /* Rescale pixmaps to proper size. */
    pixmapDinosaur = pixmapDinosaur.scaled(DINOSAUR_ICON_WIDTH, 
                                           DINOSAUR_ICON_HEIGHT, 
                                           Qt::KeepAspectRatio, 
                                           Qt::SmoothTransformation);

    pixmapDinosaurLeftFootUp = pixmapDinosaurLeftFootUp.scaled(DINOSAUR_ICON_WIDTH, 
                                                               DINOSAUR_ICON_HEIGHT, 
                                                               Qt::KeepAspectRatio, 
                                                               Qt::SmoothTransformation);

    pixmapDinosaurRightFootUp = pixmapDinosaurRightFootUp.scaled(DINOSAUR_ICON_WIDTH, 
                                                                 DINOSAUR_ICON_HEIGHT, 
                                                                 Qt::KeepAspectRatio, 
                                                                 Qt::SmoothTransformation);

}