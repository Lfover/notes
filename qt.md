#  qt

```
#include "conviencestore.h"
#include "ui_conviencestore.h"
#include "goodswrite.h"
#include "goodscheck.h"
#include "systemset.h"
#include <QStandardItemModel.h>
#include <QDebug>
ConvienceStore::ConvienceStore(QWidget *parent) :
    QMainWindow(parent),
    //QStandardItemModel(parent),
    ui(new Ui::ConvienceStore)
{
    ui->setupUi(this);
    tableView = new QTableView;
      standItemModel = new QStandardItemModel();

      standItemModel->setColumnCount(6);
      standItemModel->setHeaderData(2,Qt::Horizontal, "条形码");
      //model->setHeaderData(2,Qt::Horizontal, "名称");
      //model->setHeaderData(2,Qt::Horizontal, "种类");
      //model->setHeaderData(2,Qt::Horizontal, "生产日期");
      //model->setHeaderData(2,Qt::Horizontal, "售价");
      //model->setHeaderData(2,Qt::Horizontal, "数量");

}



ConvienceStore::~ConvienceStore()
{
    delete ui;
}


void ConvienceStore::on_pushButton_3_clicked()
{
   GoodsWrite *swin = new GoodsWrite;
   swin->show();
   //this->close();
}


void ConvienceStore::on_pushButton_4_clicked()
{
   GoodsCheck *twin=new GoodsCheck;
   twin->show();
   //this->close();

}


void ConvienceStore::on_pushButton_6_clicked()
{
    SystemSet *fwin=new SystemSet;
    fwin->show();
   //this->close();
}




void ConvienceStore::on_tableView_activated(const QModelIndex &index)
{
    QStandardItemModel *model = new QStandardItemModel();
      model->setColumnCount(6);
      model->setHeaderData(2,Qt::Horizontal, "条形码");
      model->setHeaderData(2,Qt::Horizontal, "名称");
      model->setHeaderData(2,Qt::Horizontal, "种类");
      model->setHeaderData(2,Qt::Horizontal, "生产日期");
      model->setHeaderData(2,Qt::Horizontal, "售价");
      model->setHeaderData(2,Qt::Horizontal, "数量");

}
```

