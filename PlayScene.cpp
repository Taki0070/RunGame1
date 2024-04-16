#include "PlayScene.h"
#include"Player.h"
#include "Object.h"
#include"Flag.h"
#include"Stage.h"
//�R���X�g���N�^
PlayScene::PlayScene(GameObject* parent)
	: GameObject(parent, "PlayScene")
{
}

//������
void PlayScene::Initialize()
{
	Instantiate<Stage>(this);
	Instantiate<Object>(this);
	Instantiate<Flag>(this);
	Instantiate<Player>(this);

}

//�X�V
void PlayScene::Update()
{
}

//�`��
void PlayScene::Draw()
{
}

//�J��
void PlayScene::Release()
{
}