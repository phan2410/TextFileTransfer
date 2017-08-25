#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "anlogger.h"
#include "CanBusWorker/canbusworker.h"
#include <QThread>
#include "canprotocol.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void Out(QVariant *, QVariant * = Q_NULLPTR);
private slots:
    void In(QVariant * enumVar, QVariant * dataVar = Q_NULLPTR);
    void on_pushButton_SendARandomMessage_clicked();

    void on_pushButton_clearPendingFrameList_clicked();

    void on_pushButton_Connect_clicked();

    void on_pushButton_clicked();

    void on_pushButtonSendAPresenceReq_clicked();

    void on_pushButtonSendADataReq_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QTimer tmr;
};

#endif // MAINWINDOW_H
