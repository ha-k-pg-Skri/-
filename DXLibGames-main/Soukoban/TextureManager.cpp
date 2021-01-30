#include "TextureManagerr.h"


//------------------------------------------------------------
// �V���O���g���f�U�C��
TextureManager* TextureManager::m_pInstance = nullptr;

// ���̂����֐�
void TextureManager::CreateInstance()
{
	// null�`�F�b�N�����āA�Q��ȏ�����̂�h�~
	if (m_pInstance == nullptr)
	{
		m_pInstance = new TextureManager();
	}
}
// ���̂�j������֐�
void TextureManager::DestroyInstance()
{
	delete m_pInstance;
	m_pInstance = nullptr;
}
// ���̂����邩���m�F����֐�
bool TextureManager::IsNull()
{
	return (m_pInstance == nullptr);
}
// ���̂��擾����֐�
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

