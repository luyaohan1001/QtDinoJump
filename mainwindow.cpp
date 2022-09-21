#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QKeyEvent>
#include <QtDebug>
#include <QTimer>
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap dinosaur = QPixmap("/home/luyaohan1001/Projects/QtDinasourGame/media/pics/dinosaur.png");
    dinosaur = dinosaur.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    this->tempFlag = false;

    ui->labelDinosaur->setPixmap(dinosaur);
    // ui->labelDinosaur->setGeometry(20,10, 50, 50);


    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::dinosaurJumpTimeoutHandler);
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::keyPressEvent Detects any keys pressed on the keyboard without buffering.
 * @param keyEvent
 */
void MainWindow::keyPressEvent(QKeyEvent *keyEvent) {
    qInfo() << "Pressed key left" << keyEvent->key();
    QString keyName = QKeySequence(keyEvent->key()).toString();
    qInfo() << keyName + " pressed";
}

void MainWindow::dinosaurJumpTimeoutHandler() {
    unsigned int locationX = 10;
    unsigned int locationY = 100;

    QPropertyAnimation *dinosaurJumpAnimation = new QPropertyAnimation(ui->labelDinosaur, "geometry");
    if (tempFlag == true) {
        dinosaurJumpAnimation->setDuration(500);
        dinosaurJumpAnimation->setStartValue(QRect(
                                10,
                                100,
                                DINOSAUR_ICON_WIDTH,
                                DINOSAUR_ICON_HEIGHT
                                ));

        dinosaurJumpAnimation->setEndValue(QRect(
                                10,
                                10,
                                DINOSAUR_ICON_WIDTH,
                                DINOSAUR_ICON_HEIGHT
                                ));

        dinosaurJumpAnimation->start();
        // ui->labelDinosaur->setGeometry(10,
        //                                10,
        //                                DINOSAUR_ICON_WIDTH,
        //                                DINOSAUR_ICON_HEIGHT);
    } else {
        dinosaurJumpAnimation->setDuration(500);
        dinosaurJumpAnimation->setStartValue(QRect(
                                10,
                                10,
                                DINOSAUR_ICON_WIDTH,
                                DINOSAUR_ICON_HEIGHT
                                ));

        dinosaurJumpAnimation->setEndValue(QRect(
                                10,
                                100,
                                DINOSAUR_ICON_WIDTH,
                                DINOSAUR_ICON_HEIGHT
                                ));

        dinosaurJumpAnimation->start();
    }
    tempFlag = !tempFlag;

    qInfo() << "Hello World";
}
