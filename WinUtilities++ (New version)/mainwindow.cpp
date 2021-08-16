#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include "about.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowTitle("WinUtilities++");
    this->setStyleSheet("background-color: rgb(71, 71, 71);");
    setWindowFlag(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\system32\\msconfig.exe");
    close();
}


void MainWindow::on_pushButton_9_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\regedit.exe");
    close();
}


void MainWindow::on_pushButton_8_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\System32\\diskpart.exe");
    close();
}


void MainWindow::on_pushButton_6_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\System32\\dxdiag.exe");
    close();
}


void MainWindow::on_pushButton_5_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\system32\\cmd.exe");
    close();
}


void MainWindow::on_pushButton_2_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\system32\\Taskmgr.exe");
    close();
}


void MainWindow::on_pushButton_4_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\system32\\services.msc");
    close();
}


void MainWindow::on_pushButton_7_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\system32\\compmgmt.msc");
    close();
}


void MainWindow::on_pushButton_3_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\System32\\winver.exe");
    close();
}


void MainWindow::on_pushButton_10_clicked()
{
    about window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_11_clicked()
{
    close ();
}


void MainWindow::on_pushButton_12_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\System32\\WindowsPowerShell\\v1.0\\powershell.exe");
    close();
}


void MainWindow::on_pushButton_13_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\system32\\dfrgui.exe");
    close();
}


void MainWindow::on_pushButton_14_clicked()
{
    QProcess::startDetached("explorer", QStringList() << "C:\\Windows\\system32\\control.exe");
    close();
}

