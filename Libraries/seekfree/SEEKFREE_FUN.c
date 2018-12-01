/*********************************************************************************************************************
 * COPYRIGHT NOTICE
 * Copyright (c) 2017,逐飞科技
 * All rights reserved.
 * 技术讨论QQ群：179029047
 *
 * 以下所有内容版权均属逐飞科技所有，未经允许不得用于商业用途，
 * 欢迎各位使用并传播本程序，修改内容时必须保留逐飞科技的版权声明。
 *
 * @file       		FUN
 * @company	   		成都逐飞科技有限公司
 * @author     		逐飞科技(QQ3184284598)
 * @version    		v2.0
 * @Software 		IAR 7.7 or MDK 5.23
 * @Target core		S9KEA128AMLK
 * @Taobao   		https://seekfree.taobao.com/
 * @date       		2017-11-6
 ********************************************************************************************************************/



#include "SEEKFREE_FUN.h"


//-------------------------------------------------------------------------------------------------------------------
//  @brief      绝对值函数
//  @param      dat				需要求绝对值的数
//  @return     int				返回绝对值
//  @since      v1.0
//  Sample usage:				dat = myabs(dat);//将dat变成正数
//-------------------------------------------------------------------------------------------------------------------
float  myabs(float dat)
{
    if(dat>=0.0)  return dat;
    else        return -dat;
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      软件延时
//  @param      t				延时时间
//  @return     void			
//  @since      v1.0
//  Sample usage:				
//-------------------------------------------------------------------------------------------------------------------
void my_delay(long t)
{
    while(t--);
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      限幅
//  @param      x				被限幅的数据
//  @param      y				限幅范围(数据会被限制在-y至+y之间)
//  @return     float			限幅之后的数据			
//  @since      v1.0
//  Sample usage:				float dat = limit(500,300);//数据被限制在-300至+300之间  因此返回的结果是300
//-------------------------------------------------------------------------------------------------------------------
float limit(float x, float y)
{
    if(x>y)             return y;
    else if(x<-y)       return -y;
    else                return x;
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      双边限幅
//  @param      x				被限幅的数据
//  @param      a				限幅范围左边界
//  @param      b				限幅范围右边界
//  @return     float			限幅之后的数据			
//  @since      v1.0
//  Sample usage:				int16 dat = limit_ab(500,-300，400);//数据被限制在-300至+400之间  因此返回的结果是400
//-------------------------------------------------------------------------------------------------------------------
float limit_ab(float x, float a, float b)
{
    if(x<a) x = a;
    if(x>b) x = b;
    return x;
}

