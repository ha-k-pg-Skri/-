#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include"src/Definition.h"

class TextureManager
{

	// �V���O���g���f�U�C��
public:
	// static��m_pInstance�ւ̃A�N�Z�X�p�֐��Q
	// ���̂����֐�
	static void CreateInstance();
	// ���̂�j������֐�
	static void DestroyInstance();
	// ���̂����邩���m�F����֐�
	static bool IsNull();
	// ���̂��擾����֐�
	static TextureManager* GetInstance();

private:
	TextureManager();
	~TextureManager();

private:
	static TextureManager* m_pInstance;
};


#endif