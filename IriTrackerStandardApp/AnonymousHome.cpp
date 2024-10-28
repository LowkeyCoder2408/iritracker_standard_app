#include "AnonymousHome.h"

AnonymousHome::AnonymousHome(QWidget* parent) : QWidget(parent) {
    ui.setupUi(this);
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &AnonymousHome::showTime);
    timer->start(1000);
    connect(timer, SIGNAL(timedout()), this, SLOT(showTime()));
}

void AnonymousHome::showTime() {
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh:mm:ss");
    QString apText = time.hour() < 12 ? " AM" : " PM";
    QString formattedTimeText = QString("<span style='font-size: 78px;'>%1</span><span style='font-size: 52px;'>%2</span>")
        .arg(timeText)
        .arg(apText);
    ui.timeLabel->setText(formattedTimeText);

    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeText = dateTime.toString("dddd, d MMMM, yyyy");
    ui.dateLabel->setText(dateTimeText);
}

AnonymousHome::~AnonymousHome() {}