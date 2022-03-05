#pragma once
using namespace System;

ref class CL_comp_total {
	int total;
public:
	String^ SelectHT(String^);
	String^ SelectTTC(String^);
	String^ Insert(int);
	String^ Update(void);
	String^ Delete(void);
	void setTotal(int);
	int getTotal(void);
};