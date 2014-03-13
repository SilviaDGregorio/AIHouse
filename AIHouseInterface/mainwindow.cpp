#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../../AIHouse/include/AIHouse.h"
QVBoxLayout *box = new QVBoxLayout();
AIHouse * aihouse= new AIHouse(100);
int namelabel=0;
QList<QLabel*>* labelVector = new QList<QLabel*>();
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LightButton_clicked()
{

   QPixmap pix("/home/trabajo32/AIHouse/AIHouseInterface/light2.jpg");
   QLabel *l = new QLabel();
   l->setPixmap(pix);
   box->addWidget(l);

   ui->groupBoxComponents->setLayout(box);
}

void MainWindow::on_pushButton_clicked()
{
    dialogComponent = new AddComponent();
    dialogComponent->exec();
    if(dialogComponent->name!="" && dialogComponent->type!="" && dialogComponent->power!="")
    {

          if(dialogComponent->type=="Light"){
                            QPixmap pix("/home/trabajo32/AIHouse/AIHouseInterface/light2.jpg");
                            QLabel *l = new QLabel();
                            l->setObjectName(QString::number(namelabel));
                            labelVector->insert(labelVector->size(),l);
                            l->setPixmap(pix);
                            box->addWidget(l);
                            ui->groupBoxComponents->setLayout(box);

        }
          namelabel++;
    }
}
