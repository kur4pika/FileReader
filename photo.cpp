#include "photo.h"
#include "ui_photo.h"

Photo::Photo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Photo)
{
    ui->setupUi(this);
}

Photo::~Photo()
{
    delete ui;
}
