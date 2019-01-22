#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include <QtCore>
#include <QMainWindow>
#include "Task_Set.h"
#include "Block.h"
#include "s_window.h"


namespace Ui {
class MainWindow;
class Task_Set;

}
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

protected:
full_Block *my_fblock;
full_Block act_fblock;
Task_Set set;
Task_Set *mytasks;
Schedule sched;
Schedule *my_schedule;

    void Get_Inputs();
    bool Check_Inputs();
    void Display_Util();
    int gcd(int a, int b);
    int lcm(int a, int b);
    int HyperPeriod();

    void Schedule_Tasks();
    void Generate_Tasks(double cur_time);
    int Get_Highest_Priority(int time);
    void Display_Graphic();
    void WCRT();
private slots:
    void on_NumOfTasks_valueChanged(int val);
    void on_btn_generate_clicked();
    void on_btn_exit_clicked();
    void on_Num_AperiodicTasks_valueChanged(int val);


private:
 Ui::MainWindow *ui;
 s_window *my_swin;
 s_window swin;
};




#endif // MAINWINDOW_H
