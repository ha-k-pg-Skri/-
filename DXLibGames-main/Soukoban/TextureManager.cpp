#include "TextureManagerr.h"


//------------------------------------------------------------
// シングルトンデザイン
TextureManager* TextureManager::m_pInstance = nullptr;

// 実体を作る関数
void TextureManager::CreateInstance()
{
	// nullチェックをして、２回以上作られるのを防止
	if (m_pInstance == nullptr)
	{
		m_pInstance = new TextureManager();
	}
}
// 実体を破棄する関数
void TextureManager::DestroyInstance()
{
	delete m_pInstance;
	m_pInstance = nullptr;
}
// 実体があるかを確認する関数
bool TextureManager::IsNull()
{
	return (m_pInstance == nullptr);
}
// 実体を取得する関数
TextureManager* TextureManager::GetInstance()
{
	return m_pInstance;
}

TextureManager::TextureManager()
{
}

TextureManager::~TextureManager()
{
}

