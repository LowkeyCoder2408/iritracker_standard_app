#pragma once
#include "ui_AnonymousHome.h"
#include <QWidget>
#include <QTimer>
#include <QTime>

class AnonymousHome : public QWidget {
	Q_OBJECT

public:
	AnonymousHome(QWidget* parent = nullptr);
	void showTime();
	~AnonymousHome();

signals:

private:
	Ui::AnonymousHomeClass ui;
	QTimer timer;
};