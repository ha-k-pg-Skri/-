#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include"src/Definition.h"

class TextureManager
{

	// シングルトンデザイン
public:
	// staticなm_pInstanceへのアクセス用関数群
	// 実体を作る関数
	static void CreateInstance();
	// 実体を破棄する関数
	static void DestroyInstance();
	// 実体があるかを確認する関数
	static bool IsNull();
	// 実体を取得する関数
	static TextureManager* GetInstance();

private:
	TextureManager();
	~TextureManager();

private:
	static TextureManager* m_pInstance;
};


#endif