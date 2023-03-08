#include "s3c2440addr.h"

void led_on_all()
{
    rGPBDAT = (rGPBDAT&~(0xf<<5))|(0x0<<5);


}

void led_off_all()
{
    rGPBDAT = (rGPBDAT&~(0xf<<5))|(0xf<<5);

}

void led_on(int index)
{
    rGPBDAT &= ~(1<<index+5);


}
void led_off(int index)
{

    rGPBDAT |= (1<<index+5);
}