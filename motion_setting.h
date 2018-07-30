#ifndef MOTION_SETTING_H
#define MOTION_SETTING_H

#include <QDialog>
#include <windows.h>
#include "value_setting.h"

namespace Ui {
class Motion_Setting;
}

class Motion_Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Motion_Setting(QWidget *parent = 0);
    ~Motion_Setting();


    /*FLOAT   StrVel_Xshift;
    FLOAT   StrVel_Yshift;
    FLOAT   StrVel_Zshift;
    FLOAT   StrVel_Xtilt;
    FLOAT   StrVel_Ytilt;
    FLOAT   StrVel_Rotate;
    FLOAT   StrVel_Xglue;
    FLOAT   StrVel_Yglue;

    FLOAT   MaxVel_Xshift;
    FLOAT   MaxVel_Yshift;
    FLOAT   MaxVel_Zshift;
    FLOAT   MaxVel_Xtilt;
    FLOAT   MaxVel_Ytilt;
    FLOAT   MaxVel_Rotate;
    FLOAT   MaxVel_Xglue;
    FLOAT   MaxVel_Yglue;

    FLOAT   Tacc_Xshift;
    FLOAT   Tacc_Yshift;
    FLOAT   Tacc_Zshift;
    FLOAT   Tacc_Xtilt;
    FLOAT   Tacc_Ytilt;
    FLOAT   Tacc_Rotate;
    FLOAT   Tacc_Xglue;
    FLOAT   Tacc_Yglue;

    FLOAT   Tdec_Xshift;
    FLOAT   Tdec_Yshift;
    FLOAT   Tdec_Zshift;
    FLOAT   Tdec_Xtilt;
    FLOAT   Tdec_Ytilt;
    FLOAT   Tdec_Rotate;
    FLOAT   Tdec_Xglue;
    FLOAT   Tdec_Yglue;*/

private slots:
    void on_Xshift_StrVel_Edit_editingFinished();

private:
    Ui::Motion_Setting *ui;
};

#endif // MOTION_SETTING_H
