#pragma once
#include "PlyMeshArcBall.h"
class CGlobalVariable
{
public:
	CGlobalVariable(void);
	virtual ~CGlobalVariable(void);
	
public:
	int nActiveMesh_;
	CGrowableArray <CPlyMeshArcBall> meshes_;           // List of meshes being rendered
	// ���ӻ���ٵ���
	float m_edtModelStep;
	// X����ֵ
	float m_edtModel_X;
	// Y����ֵ
	float m_edtModel_Y;
	// Z����ֵ
	float m_edtModel_Z;
	// �Ƿ�ѡ��X��
	BOOL m_chkX;
	// �Ƿ�ѡ��Y��
	BOOL m_chkY;
	// �Ƿ�ѡ��Z��
	BOOL m_chkZ;

	IDirect3DDevice9*pd3dDevice;
	
};
