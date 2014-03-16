#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include "addcomponent.h"
#include <QDir>
#include <QSignalMapper>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_LightButton_clicked();

    void on_pushButton_clicked();

    void handleButton(QString pstring);
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    AddComponent *dialogComponent;
};

#endif // MAINWINDOW_H
