#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->webView->setUrl(QUrl("http://www.google.com"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
