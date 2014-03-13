#ifndef ADDCOMPONENT_H
#define ADDCOMPONENT_H

#include <QDialog>

namespace Ui {
class AddComponent;
}

class AddComponent : public QDialog
{
    Q_OBJECT

public:
    explicit AddComponent(QWidget *parent = 0);
    ~AddComponent();
    QString name;
    QString type;
    QString power;
private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddComponent *ui;

};

#endif // ADDCOMPONENT_H
