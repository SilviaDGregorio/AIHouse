#include "addcomponent.h"
#include "ui_addcomponent.h"

AddComponent::AddComponent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddComponent)
{
    QStringList list;
    list.append("Light");
    list.append("PC");
    list.append("Heater");
    list.append("Magnet");
    ui->setupUi(this);
    ui->comboBoxType->addItems(list);


}

AddComponent::~AddComponent()
{
    delete ui;
}

void AddComponent::on_buttonBox_accepted()
{
    name=ui->lineEditName->text();
    type=ui->comboBoxType->currentText();
    power=ui->lineEditPower->text();
}
