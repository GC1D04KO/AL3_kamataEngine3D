#include "WorldTransform.h"
#include"Model.h"
class Player {

public:
	void Initialize(Model* model, uint32_t textureHandle,ViewProjection*viewProjection);

	void Update();

	void Draw();

private:
	// ワールド変換データ
	WorldTransform worldTransform_;
	// モデル

	Model* model_ = nullptr;

	uint32_t textureHandle_ = 0u;

	ViewProjection*viewProjection_=nullptr;
};