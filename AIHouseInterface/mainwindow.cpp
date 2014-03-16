#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../../AIHouse/include/AIHouse.h"
QHBoxLayout *box = new QHBoxLayout();
AIHouse * aihouse= new AIHouse(100);
int namelabel=0;
int column=0;
int file=0;
QSignalMapper mapper;
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
   l->setFixedWidth(40);
   ui->gridLayout->addWidget(l,file,column,Qt::AlignHCenter);

column++;
  if(column%4==0){
      column=0;
        file++;
    }

}

void MainWindow::on_pushButton_clicked()
{
    dialogComponent = new AddComponent();
    dialogComponent->exec();
    if(dialogComponent->name!="" && dialogComponent->type!="" && dialogComponent->power!="")
    {

          if(dialogComponent->type=="Light"){
                            QPixmap pix("/home/trabajo32/AIHouse/AIHouseInterface/light2.jpg");
                            QPushButton *p= new QPushButton();
                            QIcon ButtonIcon(pix);
                            p->setIcon(ButtonIcon);
                            p->setIconSize(pix.rect().size());
                            ui->gridLayout->addWidget(p,file,column,Qt::AlignHCenter);
                            Components::pointer component(new Components(dialogComponent->name.toStdString(),dialogComponent->power.toInt(),p));
                            aihouse->componentsVector.push_back(component);
                           column++;
                           if(column%4==0){
                               column=0;
                                 file++;
                             }

        }
         else if(dialogComponent->type=="Heater"){
              QPixmap pix("/home/trabajo32/AIHouse/AIHouseInterface/heaterSN.jpg");
              QPushButton *p= new QPushButton();
              QIcon ButtonIcon(pix);
              p->setIcon(ButtonIcon);
              p->setIconSize(pix.rect().size());
              ui->gridLayout->addWidget(p,file,column,Qt::AlignHCenter);
              Components::pointer component(new Components(dialogComponent->name.toStdString(),dialogComponent->power.toInt(),p));
              aihouse->componentsVector.push_back(component);
             column++;
             if(column%4==0){
                 column=0;
                   file++;
               }
          }
          else if(dialogComponent->type=="PC"){
               QPixmap pix("/home/trabajo32/AIHouse/AIHouseInterface/PC.jpg");
               QPushButton *p= new QPushButton();
               QIcon ButtonIcon(pix);
               p->setIcon(ButtonIcon);
               p->setIconSize(pix.rect().size());
               ui->gridLayout->addWidget(p,file,column,Qt::AlignHCenter);
               Components::pointer component(new Components(dialogComponent->name.toStdString(),dialogComponent->power.toInt(),p));
               aihouse->componentsVector.push_back(component);
              column++;
              if(column%4==0){
                  column=0;
                    file++;
                }
           }
          else if(dialogComponent->type=="Magnet"){
               QPixmap pix("/home/trabajo32/AIHouse/AIHouseInterface/magnet.jpg");
               QPushButton *p= new QPushButton();
               QIcon ButtonIcon(pix);
               p->setIcon(ButtonIcon);
               p->setIconSize(pix.rect().size());
               Components::pointer component(new Components(dialogComponent->name.toStdString(),dialogComponent->power.toInt(),p));
               aihouse->componentsVector.push_back(component);
               connect(p, SIGNAL(released()), &mapper, SLOT(map()));
               mapper.setMapping(p, dialogComponent->name); // Number to be passed in the slot
               connect(&mapper, SIGNAL(mapped(QString)), this, SLOT(handleButton(QString)));
               ui->gridLayout->addWidget(p,file,column,Qt::AlignHCenter);

              column++;
              if(column%4==0){
                  column=0;
                    file++;
                }
           }
          namelabel++;
    }
}
void MainWindow::handleButton(QString pstring)
{
int i=0;
Components::pointer com;
    for(std::vector<Components::pointer>::iterator it=aihouse->componentsVector.begin();it!=aihouse->componentsVector.end();++it){
        com=aihouse->componentsVector.at(i);
        if(com->getName()==pstring.toStdString()){
            //om.getButton()->deleteLater();
            aihouse->componentsVector.erase(aihouse->componentsVector.begin()+i);
        }
        i++;
    }

}



void MainWindow::on_pushButton_6_clicked()
{
    QPixmap pix("/home/trabajo32/AIHouse/AIHouseInterface/gatete.jpg");
    QIcon ButtonIcon(pix);

    vector<Components::pointer> vectorcom=aihouse->calculatePower();
    for(Components::pointer component:vectorcom){
        for(Components::pointer com:aihouse->componentsVector)
            if(com->getName()==component->getName()){
                QPushButton *p=com->getButton();
                p->setIcon(pix);
            }

    }
}
