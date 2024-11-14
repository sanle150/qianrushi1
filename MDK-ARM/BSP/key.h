#ifndef __KEY_H_
#define __KEY_H_

#include "main.h"
//该代码在金葫芦开发板上使用,管脚连接建议
//端口命名  芯片管脚  开发板编号
//R1         PA15         22
//R2         PA5          21
//R3         PA6          16
//R4         PA7          15

//C1         PB4          24
//C2         PB3          23
//C3         PB5          25
//C4         PB6          27

//定义了一种数据类型



//定义操作函数,按键扫描
uint8_t KEY_Scan(void);

#endif
