#include "lwip/opt.h"
#include <sys/time.h>
#include <sys/types.h>
#include "lwip/sockets.h"
/*u-boot�ܶ�ط��õ�����ʱ��������Ҫ��cpu�����interrupts.c�ļ��е�udelay��get_timer����get_timer_masked�����Լ���ʾ��ǰʱ���ȫ�ֱ���timestamp����һ�η��ʶ�ʱ����ʱ��lastdecʵ�ֵġ�
 
1 ʵ����ʱҪ�õ�һ����ʱ����u-boot���ò�ѯ��ʱ��TC�ķ����õ���ǰ��ʱ��㣬������Ҫ���ݶ�ʱ��ԭ��ʵ��READ_TIMER�꣬�Ӵ���get_timer_maskd���������жϴ󲿷ֶ�ʱ����Ӧ����TC�ݼ��ģ���LPC2468�Ķ�ʱ����TC���ӵģ�
2 ����u-boot����Сʱ������1us���CFG_HZ��������֤TC��1С��1us��1usΪTCֵ�����������ο�5
3 u-bootĬ����ʱʱ�䲻�ᳬ��TC��λ���ڵ�2����С�����Ը���lastdec��now��TCֵ��С�жϳ�TC�Ƿ�ѭ����һ�Σ����õ�timestamp��������lastdec����get_timer_masked��
4 get_timer���÷�����ts = gettimer(0)�õ���ǰ��timestamp�����Դ�Ϊ���㣬Ȼ��ѭ���ж�Ҫ��ĵȴ������Ƿ����㣬ѭ������Ƚ�gettimer(ts)��Ҫ�����ʱ���Ĵ�С���糬ʱ���˳�����
5 udelay����С������1us,���Ը�������С����ѡ����ʵ�CFG_HZ������������1us��ʱ����TC�������������ͬʱ�������ֵ��32bit,�Լ���ʱ��TC�����ݿ��Ϊ16λ����32λ�������ʱ������ӳ�ʱ�䡣*/

u32_t
sys_now(void)
{
	//ulong start, now, last;
//	start = get_timer(0);

//    struct timeval tv;
//    if (gettimeofday(&tv, NULL))
//        return 0;
//    else
//        return tv.tv_sec * 1000 + tv.tv_usec / 1000;	
}

