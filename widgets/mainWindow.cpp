#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	connect(ui->exitButton, &QPushButton::clicked
			, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::close()
{
	QApplication::exit();
}
