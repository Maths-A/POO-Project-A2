#include "Comp_TB_Date.h"

String^ CL_comp_date::Select(void)
{
    return "";
}

String^ CL_comp_date::Insert(void)
{
    return "INSERT INTO dbo.date VALUES ('" + date + "');";
}

String^ CL_comp_date::Update(void)
{
    return "";
}

String^ CL_comp_date::Delete(void)
{
    return "";
}

void CL_comp_date::setDate(String^ date)
{
    this->date = date;
}

String^ CL_comp_date::getDate(void)
{
    return this->date;
}
