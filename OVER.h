#pragma once
#include"Engine/GameObject.h"
class OVER
	:public GameObject
{
private:
	int hPict_;

public:
	OVER(GameObject* parent);

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;
};

