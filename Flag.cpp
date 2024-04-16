#include "Flag.h"
#include"Engine/Model.h"
Flag::Flag(GameObject* parent)
	:GameObject(parent,"Flag"),hModel_(-1)
{
}

void Flag::Initialize()
{
	hModel_ = Model::Load("Model\\flag.fbx");
	assert(hModel_ >= 0);

	transform_.scale_.y =2 ;
	transform_.position_ = { -1.3, 0, 20 };
	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, -0.5); //�@0.1f�ɂ����珬�����@����
	AddCollider(collision);
}

void Flag::Update()
{
	transform_.position_.z -= 0.1f;
}

void Flag::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Flag::Release()
{
}

void Flag::OnCollision(GameObject* pTarget)
{
}
