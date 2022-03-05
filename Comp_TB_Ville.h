#pragma once
using namespace System;

ref class CL_comp_ville {
	String^ ville;
public:
	String^ Select(void);
	String^ Insert(void);
	String^ Update(void);
	String^ Delete(void);
	void setVille(String^);
	String^ getVille(void);
};