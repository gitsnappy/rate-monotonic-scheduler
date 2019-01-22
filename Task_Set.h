#ifndef TASK_SET_H
#define TASK_SET_H

class Task_Set {

public:
    double atime_remaining[3];
    double acost[3];
    int arrival[3];
    double astart_time[3];
    double aend_time[3];
    double cost[5];
    int period[5];
    int priority[5];
    Task_Set::Task_Set();
    Task_Set::~Task_Set();
    int num_of_tasks;
    int num_aperiodic;
};


#endif // TASK_SET_H
