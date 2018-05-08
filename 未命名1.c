#include <stdio.h> 
#define N 10//宏定义 方便修改N 
 struct  stu{
 	char code[20];
 	int score;
 }zgf[10];//定义一个结构体stu类型 数组zgf 用于存放学号和分数 
 void fun(struct stu a[N])//定义fun函数 读入结构体数组 
 {
 	int maxscore,i;//定义变量最大分数 i 
 	maxscore=a[0].score;//把结构体数组第 0 中的分数赋值给ms 
 	for(i=1;i<N;i++)//遍历数组 
	 if (a[i].score>maxscore)//如果分数大于 ms 
	 maxscore=a[i].score;//把这个分数赋值给ms 
	 //先寻找最大值 
	 for (i=0;i<N;i++)//遍历数组 
	 if(a[i].score==maxscore)//如果分数等于ms 
//	 再存放到数组中 
	 zgf[i++]=a[i];//将a[]赋值给zgf数组 随后i+1 
	 return ;//无返回值 
	 {
// 		张弛然吃屎 
	 }
 }
// //要求 十个学生包含学号·成绩信息 
// 编写一函数把分数最高的学生数据存放在另一个数组中 
// 分数最高的学生可能不止一个 
int main()
{
	
	return;
}
