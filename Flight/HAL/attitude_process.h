#ifndef __ATTITUDE__H_
#define __ATTITUDE__H_

typedef struct{ 
	 //�����˲���������̬����Ľ��ٶ�
  	float gyroX_IMU;
  	float gyroY_IMU;
  	float gyroZ_IMU;	
		//�˲�������У׼ʹ�õļ��ٶ�ֵ
		float accX_correct;
		float accY_correct;
		float accZ_correct;		
		//��������У�����������ٶ���
		float accX_origion;
		float accY_origion;
		float accZ_origion;	
//�������ݶ�������������ٴ���
//-----------------------------------------//���ڴ����� ����GPS����ѹ��	
		float accX_control;
		float accY_control;
		float accZ_control;		
		//�����˲����ڴ������Ŀ���,������ѹ�Ƶȵ�
		float acc_yaw_sensor;
		float acc_pitch_sensor;
		float acc_roll_sensor;				
	//-----------------------------------------//
		float acc_high_feedback;   //ֱֱ�����ϵļ��ٶ����ڸ߶ȿ���PID
		float acc_pitch_feedback;
		float acc_roll_feedback;
	//-----------------------------------------//������̬����ļ��ٶ�	
		float accX_IMU;
		float accY_IMU;
		float accZ_IMU;
	//-----------------------------------------	
	  float Acceleration_Length;//��ά���ٶ�����ģ��
		float acc_x_earth; //��������ϵ�µļ��ٶ�X Y������γ���ϵļ��ٶ�
		float acc_y_earth;
		float acc_x_body; //��ͷ��ϵ�µļ��ٶ�X Y��������Ǹ����ϵ�xy
		float acc_y_body;		
		//���ڹ۲�
		float acc_yaw;
		float acc_pitch;
		float acc_roll;
}_st_Attitude;

//���ٶ�����У׼�����������
extern float K[3];//Ĭ�ϱ�����
extern float B[3];//Ĭ����λ���


extern _st_Attitude  Attitude;

extern void GYRO_IMU_Filter(short ax,short ay,short az);//���ٶȵ�ͨ�˲���������̬����
extern void ACC_IMU_Filter(short ax,short ay,short az);
extern void  SINS_Prepare(void);
#endif