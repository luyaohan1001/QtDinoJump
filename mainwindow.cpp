#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dinosaur.h"
#include "cactus.h"

#include <QKeyEvent>
#include <QtDebug>
#include <QTimer>
#include <QThread>
#include <QTime>

/**
 * @brief Main Window Constructor.
 * @param parent Pointer to the QWidget Parent.
 * @return None.
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initializeGameUIElements();
}

/**
 * @brief Main Window Destructor.
 * @param None.
 * @return None.
 */
MainWindow::~MainWindow()
{
    delete ui;
    delete m_dinosaur;
    delete m_cactus;
    delete labelDinosaur;
    delete labelCactus;
}

/**
 * @brief MainWindow::keyPressEvent Detects any keys pressed on the keyboard without buffering.
 * @param keyEvent The key detected from the user input.
 */
void MainWindow::keyPressEvent(QKeyEvent *keyEvent) {
    qInfo() << "Pressed key left" << keyEvent->key();
    QString keyName = QKeySequence(keyEvent->key()).toString();

    qInfo() << keyName + " pressed" + " detected";
    if (keyName == "Up") {
       animateDinosaurJumpAndLand();
    }
}

/**
 * @brief Initialize the UI elements (the dinosaur and the obtacles) in the game.
 * @param None.
 * @return None.
 */
void MainWindow::initializeGameUIElements(){
    m_dinosaur = new Dinosaur();
    labelDinosaur = new QLabel(this);
    labelDinosaur->setPixmap(m_dinosaur->pixmapDinosaur);
    labelDinosaur->setGeometry(Dinosaur::DINOSAUR_GROUND_HORIZONTAL_POSITION,
                               Dinosaur::DINOSAUR_GROUND_HEIGHT,
                               Dinosaur::DINOSAUR_ICON_WIDTH,
                               Dinosaur::DINOSAUR_ICON_HEIGHT
                              );

    m_cactus = new Cactus();
    labelCactus = new QLabel(this);
    labelCactus->setPixmap(m_cactus->pixmapCactus);

    /* TODO: Add logic for cactus approaching the dinosaur. */
    animateCactusApproaching();
    QTimer *m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &MainWindow::dinosaurJumpTimeoutHandler);
    m_timer->start(100);
}

/**
 * @brief Animate the action of the dinosaur landing from its previous jump up.
 * @param None.
 * @return None.
 */
void MainWindow::animateDinosaurLand() {
    QPropertyAnimation *dinosaurLandAnimation = new QPropertyAnimation(labelDinosaur, "geometry");
    dinosaurLandAnimation->setDuration(1000);
    dinosaurLandAnimation->setStartValue(QRect(
                            Dinosaur::DINOSAUR_GROUND_HORIZONTAL_POSITION,
                            Dinosaur::DINOSAUR_JUMP_PEAK_HEIGHT,
                            Dinosaur::DINOSAUR_ICON_WIDTH,
                            Dinosaur::DINOSAUR_ICON_HEIGHT
                            ));

    dinosaurLandAnimation->setEndValue(QRect(
                            Dinosaur::DINOSAUR_GROUND_HORIZONTAL_POSITION,
                            Dinosaur::DINOSAUR_GROUND_HEIGHT,
                            Dinosaur::DINOSAUR_ICON_WIDTH,
                            Dinosaur::DINOSAUR_ICON_HEIGHT
                            ));
    dinosaurLandAnimation->start();
}

/**
 * @brief Animate the action of the dinosaur jumping up (to avoid obstacles).
 * @param None.
 * @return None.
 */
void MainWindow::animateDinosaurJumpUp() {
    QPropertyAnimation *dinosaurJumpAnimation = new QPropertyAnimation(labelDinosaur, "geometry");
    dinosaurJumpAnimation->setDuration(500);
    dinosaurJumpAnimation->setStartValue(QRect(
                                            Dinosaur::DINOSAUR_GROUND_HORIZONTAL_POSITION,
                                            Dinosaur::DINOSAUR_GROUND_HEIGHT,
                                            Dinosaur::DINOSAUR_ICON_WIDTH,
                                            Dinosaur::DINOSAUR_ICON_HEIGHT
                                        ));

    dinosaurJumpAnimation->setEndValue(QRect(
                                        Dinosaur::DINOSAUR_GROUND_HORIZONTAL_POSITION,
                                        Dinosaur::DINOSAUR_JUMP_PEAK_HEIGHT,
                                        Dinosaur::DINOSAUR_ICON_WIDTH,
                                        Dinosaur::DINOSAUR_ICON_HEIGHT
                                        ));

    dinosaurJumpAnimation->start();
}

/**
 * @brief Animate the action of the dinosaur Jumping up and landing (to avoid obstacles).
 * @param None.
 * @return None.
 */
void MainWindow::animateDinosaurJumpAndLand() {
    animateDinosaurJumpUp();
    animateDinosaurLand();
}

/**
 * @brief Animate the cactus approaching the dinosaur.
 * @param None.
 * @return None.
 */
void MainWindow::animateCactusApproaching() {
    QPropertyAnimation *cactusApproachAnimation = new QPropertyAnimation(this->labelCactus, "geometry");

    cactusApproachAnimation->setDuration(2000);
    cactusApproachAnimation->setStartValue(QRect(
                                               Cactus::CACTUS_GROUND_HORIZONTAL_START_POSITION,
                                               Cactus::CACTUS_GROUND_HEIGHT,
                                               Cactus::CACTUS_ICON_WIDTH,
                                               Cactus::CACTUS_ICON_HEIGHT
                                            ));

    cactusApproachAnimation->setEndValue(QRect(
                                            Cactus::CACTUS_GROUND_HORIZONTAL_END_POSITION,
                                            Cactus::CACTUS_GROUND_HEIGHT,
                                            Cactus::CACTUS_ICON_WIDTH,
                                            Cactus::CACTUS_ICON_HEIGHT
                                            ));

    cactusApproachAnimation->start();
}


/**
 * @brief Determine whether the dinosaur has hit any obstacles.
 * @param None.
 * @return True if the dinosaur has hit the obstacle.
 */
bool MainWindow::dinosaurHitObstacles() {
    int xDistance = abs(labelCactus->x() - labelDinosaur->x());
    int yDistance = abs(labelCactus->y() - labelDinosaur->y());
    return ( (xDistance < Dinosaur::DINOSAUR_ICON_WIDTH) 
            && (yDistance < Dinosaur::DINOSAUR_ICON_HEIGHT));
}

/**
 * @brief Handler to the timeout event of m_timer. The dinosaur's pixmap will be updated to show its walking in a stop motion fashion.
 * @param None.
 * @return None.
 */
void MainWindow::dinosaurJumpTimeoutHandler() {
    if (m_dinosaur->dinosaurFootAction == DINOSAUR_STEP_LEFTFOOT) {
        labelDinosaur->setPixmap(m_dinosaur->pixmapDinosaurRightFootUp);
        m_dinosaur->dinosaurFootAction = DINOSAUR_STEP_RIGHTFOOT;
    } else {
        labelDinosaur->setPixmap(m_dinosaur->pixmapDinosaurLeftFootUp);
        m_dinosaur->dinosaurFootAction = DINOSAUR_STEP_LEFTFOOT;
    }

    if (dinosaurHitObstacles() ==  true) {
        qInfo() << "Dinosaur Hit A Cactus 0o0...Game Over!";
        // exit(0);
        while(1);
    }
}