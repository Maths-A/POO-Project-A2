#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

ref class CL_comp_CAD
{
private:
	System::String^ sSql;
	System::String^ sCnx;
	System::Data::SqlClient::SqlConnection^ oCnx;
	System::Data::SqlClient::SqlCommand^ oCmd;
	System::Data::SqlClient::SqlDataAdapter^ oDA;
	System::Data::DataSet^ oDs;
public:
	CL_comp_CAD(void);
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
	int actionRowsID(System::String^);
};