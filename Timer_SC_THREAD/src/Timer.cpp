#include "Timer.h"

void Timer::timerLogic()
    {
        while(1)
        {
            if(p_timerRst.read() == true)
            {
                curr_count = 1;
            }
            else if(p_timerEn.read() == true)
            {
                curr_count = curr_count + 1;
                if(curr_count > target_count)
                {
                    cout<<"Timer hit the target "<<endl;
                    p_timerDoneOut.write(true);
                    curr_count = 0;
                }
            }
            wait();
        }
    }
