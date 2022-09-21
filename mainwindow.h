#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *key);

private:
    Ui::MainWindow *ui;
    static const int DINOSAUR_ICON_WIDTH = 100;
    static const int DINOSAUR_ICON_HEIGHT = 100;
    bool tempFlag;

public slots:
    void dinosaurJumpTimeoutHandler();

};
#endif // MAINWINDOW_H
