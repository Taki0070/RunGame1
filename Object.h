#pragma once
#include"Engine/GameObject.h"

class Object
	:public GameObject
{

	bool isAlive_;
public:
	//コンストラクタ
	//引数：parent  親オブジェクト（SceneManager）
	Object(GameObject* parent);
	int hModel_;
	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;

	void OnCollision(GameObject* pTarget) override;
};
