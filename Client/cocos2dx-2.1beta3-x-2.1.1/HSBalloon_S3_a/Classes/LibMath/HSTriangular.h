/********************************************************************
 *  Copyright(C) 2013 Zrong ( All rights reserved. )
 *	Created:	2013/02/28   13:31
 *	File base:	HSTriangular.h
 *	Author:		Ambition
 *	
 *	Purpose:	
*********************************************************************/
#ifndef __HSTriangular_H__
#define __HSTriangular_H__
#pragma once
#include "HSVector2d.h"

class HSTriangular 
{
public:

	//************************************
	// Method:    Process
	// FullName:  HSTriangular::Process
	// Access:    public static 
	// Returns:   bool
	// Qualifier:
	// Parameter: const HSVector2dV & contour	һ�������� ���� һ�����������
	// Parameter: HSVector2dV & outResult		���һ��ϵ�е������� ƴ�ɶ���ε�������Ƭ
	//************************************
	static bool Process(const HSVector2dV &contour,HSVector2dV &outResult);


	//************************************
	// Method:    Area
	// FullName:  HSTriangular::Area
	// Access:    public static 
	// Returns:   float
	// Qualifier:
	// Parameter: const HSVector2dV & contour  һ������ε�����������������
	//************************************
	static  float Area(const HSVector2dV &contour);


	
	//************************************
	// Method:    InsideTriangle
	// FullName:  HSTriangular::InsideTriangle
	// Access:    public static 
	// Returns:   bool
	// Qualifier:
	// Parameter: float Ax
	// Parameter: float Ay
	// Parameter: float Bx
	// Parameter: float By
	// Parameter: float Cx
	// Parameter: float Cy
	// Parameter: float Px
	// Parameter: float Py  �ж� P ���Ƿ��� �����Σ�Ax.Ay, Bx.By, Cx,Cy�� ��
	//************************************
	static bool InsideTriangle(float Ax, float Ay,
		float Bx, float By,
		float Cx, float Cy,
		float Px, float Py);

private:
	static bool Snip(const HSVector2dV &contour,int u,int v,int w,int Vsize,int *V);
};


#endif // __HSTriangular_H____
