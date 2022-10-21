#include "cactus.h"
#include <QPropertyAnimation>

/**
 * @brief Constructor for the cactus class. Loads necessary pixmaps for a cactus
 */
Cactus::Cactus() {
    pixmapCactus = QPixmap(":/media/icons/cactus.png");
    pixmapCactus = pixmapCactus.scaled(CACTUS_ICON_WIDTH,
                                        CACTUS_ICON_HEIGHT,
                                        Qt::KeepAspectRatio, 
                                        Qt::SmoothTransformation);
}