/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-09-10     86189       the first version
 */
#include <rtthread.h>
#include <rtdevice.h>

#define LED0 16

static int led_sample(int argc, char *argv[])
{
    int count = 1;
    rt_pin_mode(LED0, PIN_MODE_OUTPUT);
    while(count++)
    {
        rt_pin_write(LED0, count%2);
        rt_kprintf("LED0 is %d\n",count%2);
        rt_thread_mdelay(1000);
        if(count>10) break;
    }
    return RT_EOK;
}
/* 导出到 msh 命令列表中 */
MSH_CMD_EXPORT(led_sample, led sample);
