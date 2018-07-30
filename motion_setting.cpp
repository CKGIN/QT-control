#include "motion_setting.h"
#include "ui_motion_setting.h"
#include "value_setting.h"
#include "QMessageBox"

Motion_Setting::Motion_Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Motion_Setting)
{
    /*StrVel_Xshift=10;
    QString aa = QString("%1").arg(StrVel_Xshift);
    QMessageBox::warning(this,tr("Waring"),aa);*/
    ui->setupUi(this);

}

Motion_Setting::~Motion_Setting()
{
    delete ui;
}

void Motion_Setting::on_Xshift_StrVel_Edit_editingFinished()
{
    StrVel_Xshift = ui->Xshift_StrVel_Edit->text().toInt();
}
