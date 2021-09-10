# PA课笔记

## 		PA_1-1

![image-20210910101403078](C:\Users\86186\AppData\Roaming\Typora\typora-user-images\image-20210910101403078.png)

把reg.h中的上面三个struct改为union即可

![image-20210910101447994](C:\Users\86186\AppData\Roaming\Typora\typora-user-images\image-20210910101447994.png)

​	注意：在每次改完头文件或者配置文件之后，都要make clean一下

## 	PA_1-2



![image-20210910102408344](PA课笔记.assets/image-20210910102408344.png)

​	-对于ADC的CF：分为CF=0或CF=1两种情况判断（此处参与运算的CF是上一条指令留下的CF，然后ADC再重新设置CF）

不过CF=1的时候需要额外考虑一种情形：res = src的时候也产生进位（此时des = 0xFFF...）

其余情况看res < src?即可



​	-对于SUB，可以取减数的补码做加法，此时不能按照加法的逻辑判CF，因为减法是在表盘上逆时针运算。

