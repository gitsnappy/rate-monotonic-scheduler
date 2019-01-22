#include "math.h"
#include "mainwindow.h"
#include "s_window.h"
#include "ui_mainwindow.h"
#include "Task_Set.h"
#include <QtGui>
#include <QtCore>


#ifndef MINMAX
    #define min(a,b)(((a) < (b)) ? (a) : (b))
#endif

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox->hide();
    ui->groupBox_2->hide();
    ui->groupBox_3->hide();
    ui->groupBox_4->hide();
    ui->groupBox_5->hide();
    ui->groupBox_6->hide();
    ui->groupBox_7->hide();
    ui->groupBox_8->hide();
    ui->textEdit->setReadOnly(1);
    ui->textEdit_2->setReadOnly(1);
    ui->textEdit_3->setReadOnly(1);
    ui->textEdit_4->setReadOnly(1);
    ui->textEdit_5->setReadOnly(1);
mytasks = &set;
my_schedule = &sched;
my_swin = &swin;
my_fblock =&act_fblock;



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Num_AperiodicTasks_valueChanged(int val)
{

    switch (val)
       {
       case 3: ui->groupBox_6->show();
               ui->groupBox_7->show();
               ui->groupBox_8->show();

               mytasks->num_aperiodic =3;
               break;

       case 2: ui->groupBox_6->show();
               ui->groupBox_7->show();
               ui->groupBox_8->hide();
               mytasks->num_aperiodic =2;
               break;


       case 1: ui->groupBox_6->show();
               ui->groupBox_7->hide();
               ui->groupBox_8->hide();
               mytasks->num_aperiodic =1;
               break;

        default :
             ui->groupBox_6->hide();
             ui->groupBox_7->hide();
             ui->groupBox_8->hide();

             mytasks->num_aperiodic =0;

       };

}

void MainWindow::on_NumOfTasks_valueChanged(int val)
 {

 switch (val)
    {
    case 5: ui->groupBox_5->show();
            ui->groupBox_4->show();
            ui->groupBox_3->show();
            ui->groupBox_2->show();
            ui->groupBox->show();
            mytasks->num_of_tasks =5;
            break;

    case 4: ui->groupBox_4->show();
             ui->groupBox_3->show();
             ui->groupBox_2->show();
             ui->groupBox->show();
            ui->groupBox_5->hide();
           mytasks->num_of_tasks =4;
            break;



    case 3: ui->groupBox_3->show();
             ui->groupBox_2->show();
             ui->groupBox->show();
              ui->groupBox_5->hide();
               ui->groupBox_4->hide();
               mytasks->num_of_tasks =3;
            break;
    case 2: ui->groupBox_2->show();
            ui->groupBox->show();
            ui->groupBox_5->hide();
             ui->groupBox_4->hide();
             ui->groupBox_3->hide();
             mytasks->num_of_tasks =2;
            break;
    case 1: ui->groupBox->show();
     ui->groupBox_5->hide();
      ui->groupBox_4->hide();
      ui->groupBox_3->hide();
      ui->groupBox_2->hide();
       mytasks->num_of_tasks =1;
            break;
     default :
     ui->groupBox_5->hide();
      ui->groupBox_4->hide();
      ui->groupBox_3->hide();
      ui->groupBox_2->hide();
      ui->groupBox->hide();
      mytasks->num_of_tasks =0;

    };



}

void MainWindow::on_btn_generate_clicked()
 {

    ui->btn_generate->setEnabled(false);
    Get_Inputs();
    if (Check_Inputs() ==1)
     {
         Display_Util();
         Schedule_Tasks();
         Display_Graphic();
     }
     ui->btn_generate->setEnabled(true);
 }
void MainWindow::on_btn_exit_clicked()
 {
      qApp->quit();
 }

void MainWindow::Get_Inputs()
 { 
     mytasks->cost[0] =ui->doubleSpinBox->value();
     mytasks->period[0] =ui->spinBox->value();
     mytasks->cost[1] =  ui->doubleSpinBox_2->value();
     mytasks->period[1] =ui->spinBox_2->value();
     mytasks->cost[2] =  ui->doubleSpinBox_3->value();
     mytasks->period[2] =ui->spinBox_3->value();
     mytasks->cost[3] =  ui->doubleSpinBox_4->value();
     mytasks->period[3] =ui->spinBox_4->value();
     mytasks->cost[4] =  ui->doubleSpinBox_5->value();
     mytasks->period[4] =ui->spinBox_5->value();
     mytasks->acost[0] = ui->doubleSpinBox_6->value();
     mytasks->arrival[0] = ui->spinBox_6->value();
     mytasks->acost[1] = ui->doubleSpinBox_7->value();
     mytasks->arrival[1] = ui->spinBox_7->value();
     mytasks->acost[2] = ui->doubleSpinBox_8->value();
     mytasks->arrival[2] = ui->spinBox_8->value();
     mytasks->atime_remaining[0] = ui->doubleSpinBox_6->value();
     mytasks->atime_remaining[1] = ui->doubleSpinBox_7->value();
     mytasks->atime_remaining[2] = ui->doubleSpinBox_8->value();
     mytasks->num_aperiodic = ui->Num_AperiodicTasks->value();
     mytasks->num_of_tasks = ui->NumOfTasks->value();
     ui->textEdit_4->clear();
     ui->textEdit_3->clear();
     ui->textEdit_2->clear();
     ui->textEdit_5->clear();
     ui->textEdit->setFontPointSize(11);
}

int MainWindow::gcd(int a, int b)
{

    if (b==0)
    {

        return a;
    }
    else
    {
        return gcd(b,a-b*(a/b));
    }


}

int MainWindow::lcm(int a, int b)
{
    return abs(a*b)/gcd(a,b);

}

int MainWindow::HyperPeriod()
{
    QString qstr;
    int i,res,cur;
    res =1;
    if (mytasks->num_of_tasks >1)
    {
        for (i=0; i<(mytasks->num_of_tasks-1); i++)
        {
            cur = lcm(mytasks->period[i],mytasks->period[i+1]);
            res = lcm(cur,res);
        }
    }
    else
    {
        res = mytasks->period[0];
    }
    qstr = QString::number(res);
    ui->textEdit->append("Hyperperiod is: ");
    ui->textEdit->append(qstr);

    return res;
}


bool MainWindow::Check_Inputs()
{

    bool okay = 1;
    bool increment = 1;
    int i =0;  
    for (i=0; i< mytasks->num_of_tasks; i++)
    {

        if (mytasks->cost[i] ==0)
        {
            okay =0;
        }
        if (mytasks->period[i] ==0)
        {

            okay =0;
        }
    }
    if (mytasks->num_of_tasks ==0)
    {
        okay =0;

    }
    for (i=0; i< mytasks->num_of_tasks;i++)
    {
        if (fmod(mytasks->cost[i],0.5) != 0)
        {
            increment =0;
        }
        if (i<3)
        {
        if (fmod(mytasks->acost[i],(0.5)) != 0)
        {
            increment =0;
        }
        }
    }

   ui->textEdit->clear();
    if (okay ==0)
    {

        ui->textEdit->append("Invalid inputs. Must have at least one periodic task.");
    }


    if (increment ==0)
    {

        ui->textEdit->append("Costs must be in steps of 0.5.");


    }
    if ((okay ==0) || (increment ==0))
    {
        okay =0;
    }

    return okay;

}

void MainWindow::Display_Util()
{
    int i;
    double util=0;
    QString qstr;
    for (i=0; i<mytasks->num_of_tasks; i++)
    {
        if (mytasks->period[i] != 0)
        {
        util += mytasks->cost[i]/ mytasks->period[i];
        }
    }
    ui->textEdit->clear();
    qstr = QString::number(util);
    ui->textEdit->append("Utilization is: ");
    ui->textEdit->append(qstr);


    double compare;
    double exp =2.00;

    double frac;

    switch (mytasks->num_of_tasks)
    {
    default:
    case 1: frac = 1.00;
        break;
    case 2: frac = 1.00/2.00;
        break;
    case 3: frac = 1.00/3.00;
        break;
    case 4: frac = 1.00/4.00;
        break;
    case 5: frac = 1.00/5.00;
        break;


    };

    compare = (mytasks->num_of_tasks)*(pow(exp,frac)-1);

    qstr = QString::number(compare);
    ui->textEdit->append(" n*2^(1/n)-1 is: (");
    ui->textEdit->insertPlainText(qstr);
    ui->textEdit->insertPlainText(")");
    if (util <= compare)
    {
        ui->textEdit->append("The task set is schedulable.");

    }
    else if (util <=1)
    {
        ui->textEdit->append("The task set is not necessarily schedulable.");
    }
    else
    {
        ui->textEdit->append("The task set is not schedulable.");
    }
}

void MainWindow::Generate_Tasks(double cur_time)
{

     int i;
     for (i=0; i<mytasks->num_of_tasks; i++) //for each task
     {
         if (fmod(cur_time,mytasks->period[i]) ==0)  //if task is being released, schedule it.
         {
             my_schedule->num_of_started[i]++;

             //if deadline not missed
             if (my_schedule->deadline_missed[i] ==0)
             {


                //task released, generate new task.
                my_schedule->time_remaining[i] = mytasks->cost[i];

                if (cur_time ==0)
                {
                    my_schedule->cur_deadline[i] = mytasks->period[i];
                    my_schedule->prev_deadline[i] =0;
                }


             }
             //deadline missed
             else
             {
                 my_schedule->dq[i]++; //increase # of waiting tasks
                 my_schedule->deadline_missed[i] =0;

             }
         }
     }




}

int MainWindow::Get_Highest_Priority(int time)
 {
    QString qstr;
     int i;
     int min_period=101;
     int cur;
     int task_with_lowest;
     for (i=0; i<mytasks->num_of_tasks;i++) //search all periodic tasks
     {
         cur = mytasks->period[i];

         if ((my_schedule->time_remaining[i]>0)) //if task is waiting and period is lower
         {                           
             if (cur < min_period)
             {
             min_period = cur;
             task_with_lowest = i;
             }
         }
     }


     if (min_period ==101)
     {
         cur = 101;
         //this means no periodic tasks, but there is an aperiodic task
         for (i=0; i<mytasks->num_aperiodic; i++)
         {
             if ((mytasks->atime_remaining[i] >0) && (mytasks->arrival[i] <= time)) //if the atask has arrived but not yet finished
             {
                 if (mytasks->arrival[i] < cur ) //if tasks arrive same time, first one will go first
                 {
                     cur = mytasks->arrival[i];
                     task_with_lowest = i+5;
                 }
             }
         }

     }
     return task_with_lowest;

 }

void MainWindow::WCRT()
{
    QString qstr;
    double worst[5];

    bool Tasks_with_higher[5][5];
    int i,j;
    int priority[5];
    for (i=0; i<5; i++){

        priority[i] =1;
        worst[i] =0;
        for (j=0; j<5; j++){
            Tasks_with_higher[i][j] =0;
        }
    }
    //this loop assigns priority to each task


    for (i=0; i<mytasks->num_of_tasks; i++)//each task will compare itself to others
    {
        for (j=0; j<(mytasks->num_of_tasks); j++){//each comparison




            if (i !=j){ //don't compare to self
            if ((mytasks->period[i] <mytasks->period[j]) ||((mytasks->period[i] ==mytasks->period[j]) && (i<j))) {
                priority[i]++;//increase priority


                }
           else {
                    Tasks_with_higher[i][j] =1; //j is comparison task
           }




            }
       }
    }
    //now priority will be 1-5 for each, with 5 being the highest priority.
    //Display higher priorities


    for (i=0; i<mytasks->num_of_tasks; i++)//each task
    {
        //WCRT = cost + interference due to other tasks.
       worst[i] = mytasks->cost[i];

       for (j=0; j<mytasks->num_of_tasks; j++){

           worst[i] += Tasks_with_higher[i][j]*mytasks->cost[j]; //multiply 1 if higher than, 0 otherwise.
       }

    }
     for (i=0; i<mytasks->num_of_tasks; i++){
         qstr = QString::number(i+1);
         ui->textEdit->append("WCRT of task "); //output
         ui->textEdit->insertPlainText(qstr);
         ui->textEdit->insertPlainText(" :");
         qstr = QString::number(worst[i]);
         ui->textEdit->insertPlainText(qstr);
     }
}

void MainWindow::Schedule_Tasks()
{
QString qstr;
bool waiting;
bool missed =0;
int end,j,index,highest;
end = HyperPeriod(); //looks at all tasks, returns hyperperiod


end = min(100,end); //stop point of scheduling

double i;


//initialize t_r
for (j=0; j<mytasks->num_of_tasks;j++)
{
my_schedule->time_remaining[j] =0;
my_schedule->dq[j] =0;
my_schedule->deadline_missed[j] =0;
my_schedule->cur_deadline[j] =0;
my_schedule->prev_deadline[j] =0;
my_schedule->num_of_completions[j] = 0;
my_schedule->num_of_started[j] =0;
//my_schedule->

}
for (j=0; j<3; j++)
{
    mytasks->atime_remaining[j] =mytasks->acost[j];
}

WCRT(); //Display WCRT


//step through time
for (i=0; i<=end; i+= 0.5)
{
    if (fmod(i,1) ==0 && i!=end)//if whole number time
    {
        Generate_Tasks(i); //generates first deadline and time_remaining for new tasks
    }

    waiting =0;
    //check if any waiting periodic tasks.
    for (index=0; index< mytasks->num_of_tasks; index++)//check if any waiting periodic
    {
        if (my_schedule->time_remaining[index] >0)
        {
            waiting =1;
        }
    }
    //check all aperiodic tasks
    for (index=0; index < mytasks->num_aperiodic; index++)
    {
        if ((mytasks->arrival[index] <= i) && (mytasks->atime_remaining[index] >0)) //acost is remaining cost of aper task.
         {
             waiting =1;
         }
    }



    //get highest priority, execute it, see if it ended. check if it missed deadline if ended.
    if (waiting ==0)
    {
        my_fblock->block_arry[static_cast<int>(i*2)].task = 8; //no task executing during this period, so 8 = blank
    }

    else if (waiting ==1) //task exists to be executed
    {
        highest = Get_Highest_Priority(static_cast<int>(floor(i))); //int

        //execute highest, 0-7.
        if (highest<5)
        {
                //if started, print message
                if (my_schedule->time_remaining[highest] == mytasks->cost[highest])
                {
                    qstr = QString::number(highest+1);
                    ui->textEdit_2->append("Task "); //j  at time//i
                    ui->textEdit_2->insertPlainText(qstr);
                    ui->textEdit_2->insertPlainText(" Started at time ");
                    qstr = QString::number(i);
                    ui->textEdit_2->insertPlainText(qstr);
                }


                my_schedule->time_remaining[highest] -= 0.5;
                my_fblock->block_arry[static_cast<int>(i*2)].task = highest; //output task to painter

                if  (my_schedule->time_remaining[highest] ==0) //if finished task
                {
                    my_schedule->num_of_completions[highest]++;

                    //ended
                    qstr = QString::number(highest+1);
                    ui->textEdit_3->append("Task ");
                    ui->textEdit_3->insertPlainText(qstr);
                    ui->textEdit_3->insertPlainText(" Ended at time ");
                    qstr = QString::number(i+0.5);
                    ui->textEdit_3->insertPlainText(qstr);




                    if (my_schedule->dq[highest] >0)//check this area for error
                    {
                        //deadline missed, check queue, if waiting task, start it.
                        my_schedule->dq[highest]--; //take one out



                        my_schedule->time_remaining[highest] = mytasks->cost[highest];

                    }
                }


           for (index =0; index < mytasks->num_of_tasks; index++)
                {
                    if  ((fmod(i+0.5,(mytasks->period[index]))==0))//check
                    {
                    if ((my_schedule->num_of_completions[index] != my_schedule->num_of_started[index]))
                    {

                         //missed deadline print
                        qstr = QString::number(index+1);//j+1
                        ui->textEdit_4->append("Missed deadline: Task ");
                        ui->textEdit_4->insertPlainText(qstr);
                        ui->textEdit_4->insertPlainText(" At time ");
                        qstr = QString::number(i+0.5);  //was i
                        ui->textEdit_4->insertPlainText(qstr);
                        missed =1;

                        my_schedule->deadline_missed[index] =1;//

                    }
                    else
                    {
                        my_schedule->deadline_missed[index] =0;

                    }
                    }

                }
        }



        //aperiodic task waiting
        else
        {
            if (mytasks->atime_remaining[highest-5]== mytasks->acost[highest-5])
            {
                 qstr = QString::number(highest-4);
                 ui->textEdit_5->append("Aperiodic Task ");
                 ui->textEdit_5->insertPlainText(qstr);
                 ui->textEdit_5->insertPlainText(" Started at time ");
                 qstr = QString::number(i);
                 ui->textEdit_5->insertPlainText(qstr);
                 mytasks->astart_time[highest-5] = i;
            }
            mytasks->atime_remaining[highest-5] -= 0.5;
            my_fblock->block_arry[static_cast<int>(i*2)].task = highest;


            if (mytasks->atime_remaining[highest-5] ==0)
            {
                mytasks->aend_time[highest-5] =i +0.5;             
                qstr = QString::number(highest-4);//j+1
                ui->textEdit_5->append("Aperiodic Task ");
                ui->textEdit_5->insertPlainText(qstr);
                ui->textEdit_5->insertPlainText(" Finished at with response time of ");
                qstr = QString::number( mytasks->aend_time[highest-5]-mytasks->arrival[highest-5]);  //was i
                ui->textEdit_5->insertPlainText(qstr);
            }
        }

        waiting=0; //reset var

    }

}
my_fblock->num_of_blocks= static_cast<int>(i*2-1);//always will be at least one block for valid schedule..

if (missed ==0)
{
    ui->textEdit_4->clear();
    ui->textEdit_4->append("No missed deadlines.");
}

}



void MainWindow::Display_Graphic()
{
    my_swin->getBlocks(my_fblock); //send ptr to fblock object.
    QSize mysize;
    mysize.setHeight(800);
    mysize.setWidth(1100);
    my_swin->setMaximumSize(mysize);
    my_swin->setMinimumSize(mysize);

   my_swin->show();

 // my_swin->grab();
   //  QImage myimg;

     //myimg.save("test.png",0,-1);

   //   QPixmap qpm;

   //   qpm.grabWidget(my_swin);

   //   qpm.save("schedule2.png","PNG",-1); // 0 means .png, -1 means default quality


}

