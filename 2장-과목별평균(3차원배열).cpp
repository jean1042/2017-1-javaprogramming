#include <iostream>
using namespace std;


#define CLASS_NUM 3
#define SUBJECT_NUM 3
#define STUDENT_NUM 10


void main()
{
	double scores[STUDENT_NUM][CLASS_NUM][SUBJECT_NUM]= 
		{	10,20,20,50,50,60,70,80,90,100,
			10,20,50,40,50,65,70,80,95,100,
			10,20,20,45,50,60,70,80,90,100,
			10,20,30,40,50,60,70,80,90,100,
			10,20,70,44,50,60,70,80,90,100,
			10,20,60,20,50,60,70,80,90,100,
			10,20,20,40,50,60,70,80,90,100,
			10,20,30,80,50,60,70,80,90,100,
			10,20,30,40,50,60,70,80,90,100	};

	double average[CLASS_NUM][SUBJECT_NUM];
	double total_average[SUBJECT_NUM];

	
//�ݺ�, ���� ��� ���ϱ�
	for (int ban=0; ban<CLASS_NUM ; ban++)
		{
		
			for (int subj=0; subj<SUBJECT_NUM; subj++)
				{
				double sum = 0 ;	
					for (int stnt=0; stnt<STUDENT_NUM ; stnt++)
						{
						sum += scores[ban][subj][stnt];
						}


				average[ban][subj]= sum / STUDENT_NUM;
				
				cout << ban+1 << " ���� " << subj+1 << " ������ �����" << average[ban][subj]<< endl;

 				}
			}
	
	//���� ��ü ��� ���ϱ�
	for (int subj=0 ; subj<SUBJECT_NUM ; subj++)
	{
	
		double sum=0;
			for (int ban=0 ; ban<CLASS_NUM; ban++)	
		
				for (int stnt=0 ; stnt<STUDENT_NUM ; stnt++)
					
						sum+=scores[ban][subj][stnt];
			
			
					
	total_average[subj] = sum /(CLASS_NUM * STUDENT_NUM);
		cout << subj+1 << "������ ��ü �����" << total_average[subj]<< endl;
	
	
	
}
}