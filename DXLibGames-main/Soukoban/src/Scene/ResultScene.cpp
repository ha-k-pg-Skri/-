
#include "ResultScene.h"
#include "DxLib.h"
#include "../Manager/InputManager.h"
#include "../Manager/SceneManager.h"

// 実行ステップ定義
enum
{
	STEP_INPUT,		// 入力待ち
	STEP_END,		// シーン終了
};

ResultScene::ResultScene()
{
	set_Step( STEP_INPUT );
}

ResultScene::~ResultScene()
{
}

void ResultScene::Exec()
{
	switch ( m_Step )
	{
	case STEP_INPUT:	step_Input();	break;
	default:							break;
	}
}

void ResultScene::Draw()
{
	// 画面左上にデバッグ用の文字を黒で表示する
	int Result = LoadGraph("data/Result.jpg");


	DrawGraph(200, 50, Result, true);
	DrawString( 20, 20, "see you again ", GetColor(0,0,0) );
}

bool ResultScene::IsEnd() const
{
	return ( m_Step == STEP_END );
}

// 入力受付
void ResultScene::step_Input()
{
	InputManager* pInputMng = InputManager::GetInstance();
	if( pInputMng->IsPush(KeyType_Enter) )
	{
		set_Step( STEP_END );
		SceneManager::SetNextScene( SceneID_Title );
	}
}
