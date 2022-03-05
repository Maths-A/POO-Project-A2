#pragma once
using namespace System;

ref class CL_comp_date {
	String^ date;
public:
	String^ Select(void);
	String^ Insert(void);
	String^ Update(void);
	String^ Delete(void);
	void setDate(String^);
	String^ getDate(void);
};