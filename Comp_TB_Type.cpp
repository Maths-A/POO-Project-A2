#include "Comp_TB_Type.h"

String^ CL_comp_type::Select(void)
{
	return "";
}

String^ CL_comp_type::Insert(void)
{
	return "INSERT INTO dbo.type VALUES ('"+type+"');";
}

String^ CL_comp_type::Update(void)
{
	return "";
}

String^ CL_comp_type::Delete(void)
{
	return "";
}

void CL_comp_type::setType(String^ type)
{
	this->type = type;
}

String^ CL_comp_type::getType(void)
{
	return this->type;
}
