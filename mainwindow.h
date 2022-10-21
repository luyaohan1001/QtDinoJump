#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "dinosaur.h"
#include "cactus.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initializeGameUIElements();
    void keyPressEvent(QKeyEvent *key);
    QLabel *labelDinosaur, *labelCactus;

private:
    Ui::MainWindow *ui;

    Dinosaur *m_dinosaur;
    Cactus *m_cactus;
    
    void animateDinosaurJumpUp();
    void animateDinosaurLand();
    void animateDinosaurJumpAndLand();
    void animateCactusApproaching();

    void dinosaurJumpTimeoutHandler();
    bool dinosaurHitObstacles();
};
#endif // MAINWINDOW_H
