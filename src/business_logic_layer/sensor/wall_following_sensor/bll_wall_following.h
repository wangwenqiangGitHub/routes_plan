/******************************************************************************

  版权所有 (C), 2017-2028, _ _ _ Co., Ltd.

 ******************************************************************************
  文件名称: bll_wall_following.h
  版本编号: 初稿
  作     者: Leon
  生成日期: 2017年12月22日
  最近修改:
  功能描述: bll_wall_following.cpp 的头文件
  函数列表:
  修改历史:
  1.日     期: 2017年12月22日
    作     者: Leon
    修改内容: 创建文件
******************************************************************************/
#ifndef __BLL_WALL_FOLLOWING_H__
#define __BLL_WALL_FOLLOWING_H__

/******************************************************************************
 * 包含头文件
 ******************************************************************************/
#include <pthread.h>

/******************************************************************************
 * 外部变量声明
 ******************************************************************************/

/******************************************************************************
 * 外部函数声明
 ******************************************************************************/

/******************************************************************************
 * 全局变量
 ******************************************************************************/

/******************************************************************************
 * 宏定义
 ******************************************************************************/

/******************************************************************************
 * 常量声明
 ******************************************************************************/

/******************************************************************************
 * 枚举类型
 ******************************************************************************/

/******************************************************************************
 * 结构体类型
 ******************************************************************************/

/******************************************************************************
 * 类声明
 ******************************************************************************/
class bll_wall_following
{
protected:
	bll_wall_following();
	~bll_wall_following();
	
public:
	static bll_wall_following* get_instance(void);
	static void release_instance(void);

	void update_wall_following_sensor_data(double value);

private:
	bll_wall_following(const bll_wall_following&){};
	bll_wall_following& operator=(const bll_wall_following&){};
	
	static bll_wall_following* p_instance_;
	static pthread_mutex_t mutex_;
};

/******************************************************************************
 * 内部函数声明
 ******************************************************************************/



/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
/*****************************************************************************/

/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
/*****************************************************************************/

#endif /* __BLL_WALL_FOLLOWING_H__ */
