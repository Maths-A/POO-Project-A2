#pragma once
using namespace System;

ref class CL_comp_type {
	String^ type;
public:
	String^ Select(void);
	String^ Insert(void);
	String^ Update(void);
	String^ Delete(void);
	void setType(String^);
	String^ getType(void);
};