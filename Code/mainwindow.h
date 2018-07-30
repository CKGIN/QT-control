#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <windows.h>
#include <motion_setting.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    UINT	m_RingNo=0;
    UINT	m_DeviceIP_1=2;
    UINT    m_DeviceIP_2=4;
    UINT    m_DeviceIP_OP=8;
    UINT    m_DeviceIP_IP=16;

    UINT	m_Port_0=0;
    UINT	m_Port_1=1;
    UINT	m_Port_2=2;
    UINT	m_Port_3=3;




private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
