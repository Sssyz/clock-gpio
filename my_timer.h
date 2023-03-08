#include <semaphore.h>
#ifndef _MY_TIMER_
    #define _MY_TIMER_

    #define Available 1
    #define Run 2
    #define Allocated 3
    #define TimerNum 2
    #define SYS_CLK_RATE 60
    typedef struct Timer
    {
        int id; /* timer id */
        int seconds; /* acutally is the ticks(seconds*clkrate)*/
        int status;  /* Available Run Allocated */
        int task_id; /* used by which task       0 */
        SEM_ID sem;  /* every timer has a sem*/
        struct Timer *next;
    }Timer;

    void initTimer();
    Timer* getTimer(int task_id,int seconds);
    void freeTimer(struct Timer* timer);
    int activateTimer(Timer* timer);
    void showTimer();
    int startTimer(int task_id,int seconds)；
    void clkISR();
#endif

