#include "quit.h"
#include "ui_quit.h"

quit::quit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quit)
{
    ui->setupUi(this);
    quit::setWindowTitle("WinUtilities++");
    this->setStyleSheet("background-color: rgb(71, 71, 71);");
}

quit::~quit()
{
    delete ui;
}

void quit::on_pushButton_clicked()
{
    qApp->exit();
}


void quit::on_pushButton_2_clicked()
{
    close();
}

