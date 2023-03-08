#include "task_getTimer.h"
#include "my_timer.h"
#include <stdio.h>
#include <taskLib.h>
void Task1()
{
    
    /*Timer *timer;
    timer = getTimer(1,10);
    printf("timerid%d\n",timer->id);
    showTimer();
    if(timer!=NULL){
        printf("begin\n");
        activateTimer(timer);
        showTimer();
    }else{
        printf("fail!\n");
    }
  
    printf("end\n");*/
    int index;
    while(1){
        for(index = 0;index<=3;index=index+1){
 	printf("led%d on",index);           
	led_on(index);
            
            startTimer(1,1);
            led_off(index);
	    
		printf("led%d off",index);
           
        }


    }
   
    
    
    
    

}

void initTask()
{
    
    int task1;
    task1 = taskSpawn("task1",100,0,2000,(FUNCPTR)Task1,0,0,0,0,0,0,0,0,0,0);
}

