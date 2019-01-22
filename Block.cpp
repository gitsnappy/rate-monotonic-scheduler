
#include "Block.h"

Schedule::Schedule()
{
    int i;
    num_of_blocks =0;
    num_of_md =0;

    for (i=0; i<5; i++)
    {
       num_of_completions[i] =0;
    num_of_started[i] =0;
    deadline_missed[i] =0;
    dq[i] =0;
    }
}


Block::Block()
{
}
Block::~Block()
{
}

missed_deadline::missed_deadline()
{
}
missed_deadline::~missed_deadline()
{
}


Schedule::~Schedule()
{
}
full_Block::full_Block()
{  
num_of_blocks =0;
}
