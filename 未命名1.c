#include <stdio.h> 
#define N 10//�궨�� �����޸�N 
 struct  stu{
 	char code[20];
 	int score;
 }zgf[10];//����һ���ṹ��stu���� ����zgf ���ڴ��ѧ�źͷ��� 
 void fun(struct stu a[N])//����fun���� ����ṹ������ 
 {
 	int maxscore,i;//������������� i 
 	maxscore=a[0].score;//�ѽṹ������� 0 �еķ�����ֵ��ms 
 	for(i=1;i<N;i++)//�������� 
	 if (a[i].score>maxscore)//����������� ms 
	 maxscore=a[i].score;//�����������ֵ��ms 
	 //��Ѱ�����ֵ 
	 for (i=0;i<N;i++)//�������� 
	 if(a[i].score==maxscore)//�����������ms 
//	 �ٴ�ŵ������� 
	 zgf[i++]=a[i];//��a[]��ֵ��zgf���� ���i+1 
	 return ;//�޷���ֵ 
	 {
// 		�ų�Ȼ��ʺ 
	 }
 }
// //Ҫ�� ʮ��ѧ������ѧ�š��ɼ���Ϣ 
// ��дһ�����ѷ�����ߵ�ѧ�����ݴ������һ�������� 
// ������ߵ�ѧ�����ܲ�ֹһ�� 
int main()
{
	
	return;
}
