#include "mainWidget.h"

#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGraphicsRectItem>
#include <QtWidgets/QPushButton>

Widget::Widget(QWidget *parent)
	: QWidget(parent)
{
	const auto rect = mScene.addRect(0, 0, 30, 30);
	rect->setFlag(QGraphicsItem::ItemIsMovable);
	rect->setFlag(QGraphicsItem::ItemIsSelectable);

	const auto layout = new QGridLayout(this);

	mView = new QGraphicsView(&mScene, this);
	layout->addWidget(mView, 0, 0, 1, 3);

	const auto rectButton = new QPushButton("Rectangle");
	const auto circleButton = new QPushButton("Circle");
	const auto lineButton = new QPushButton("Line");

	layout->addWidget(rectButton, 1, 0);
	layout->addWidget(circleButton, 1, 1);
	layout->addWidget(lineButton, 1, 2);

	const auto saveButton = new QPushButton("Save as .png");
	layout->addWidget(saveButton, 2, 0, 1, 3);

	const auto secondView = new QGraphicsView(&mScene, this);
	layout->addWidget(secondView, 0, 3, 3, 1);
}

Widget::~Widget()
{
}
