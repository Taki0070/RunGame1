#pragma once

const double DEF_TIMER_TIME{ 1.0 };//�f�t�H1s

class CTimer
{
	double CountDownTimer_;  //���݂̎c�莞��
	double TIMER_INIT_TIME_; //��������
	bool isTimerRun_;//�^�C�}�[�������Ă��邩�ǂ����H
public:
	CTimer()
		:TIMER_INIT_TIME_(DEF_TIMER_TIME),
		CountDownTimer_(DEF_TIMER_TIME),
		isTimerRun_(true) {};
	CTimer(double _initTime)
		:TIMER_INIT_TIME_(_initTime),
		CountDownTimer_(_initTime),
		isTimerRun_(true) {};
	bool IsTimeOver();//�^�C�}�[�͂O�ɂȂ�܂������H�x�d�r�H�m�n�H
	void ResetTimer();//�^�C�}�[���������Ԃɖ߂�
	void StartTimer();//�^�C�}�[���X�^�[�g���܂�
	void StopTimer();//�^�C�}�[���X�g�b�v���܂�
	void Update();
	double GetTime() { return(CountDownTimer_); }
};

