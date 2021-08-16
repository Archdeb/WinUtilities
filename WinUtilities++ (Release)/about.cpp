#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    about::setWindowTitle("About");
    this->setStyleSheet("background-color: rgb(71, 71, 71);");
}

about::~about()
{
    delete ui;
}

void about::on_pushButton_clicked()
{
    close();
}

