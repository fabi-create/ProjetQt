#ifndef FORMATEXCEL_H
#define FORMATEXCEL_H
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
#include "xlsxworksheet.h"
#include "xlsxformat.h"

using namespace QXlsx;

class Formatexcel
{
public:
    Formatexcel();
    void CreateFileExcel();
};


#endif // FORMATEXCEL_H
