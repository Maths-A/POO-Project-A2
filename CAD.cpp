#include "CAD.h"

CL_comp_CAD::CL_comp_CAD(void)
{
	this->sCnx = "Data Source=DESKTOP-HHF9NR8\\MSSQL_ROM;Initial Catalog=DB_POO;User ID=CNX_INV;Password=Cesu";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ CL_comp_CAD::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
void CL_comp_CAD::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Close();
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}
int CL_comp_CAD::actionRowsID(System::String^ sSql)
{
	int Id;
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Close();
	this->oCnx->Open();
	Id = Convert::ToInt32(this->oCmd->ExecuteScalar());
	this->oCnx->Close();
	return Id;
}