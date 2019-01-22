#ifndef BLOCK_H
#define BLOCK_H

class Block
{
public:

  int task;
  Block::Block();
  Block::~Block();

};

class missed_deadline
{
public:
    int time;
    int task;
   missed_deadline::missed_deadline();
   missed_deadline::~missed_deadline();

};

class Schedule
{
public:
    Schedule::Schedule();
    Schedule::~Schedule();

    int num_of_blocks;
    int num_of_md;
    int num_of_started[5];
    int num_of_completions[5];
    int dq[5];
    bool deadline_missed[5];
    int cur_deadline[5];
    int prev_deadline[5];
    double time_remaining[5];
};
class full_Block
{
public:
    Block block_arry[201];
int num_of_blocks;
    full_Block::full_Block();

};



#endif
