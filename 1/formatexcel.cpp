
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "formatexcel.h"

Formatexcel::Formatexcel()
{

}
void Formatexcel::CreateFileExcel()
{

    QXlsx::Document xlsx;



    QXlsx::Format header;
    header.setFontBold(true);
    header.setFontSize(15);

    xlsx.setColumnWidth(1,4,20.0);
    xlsx.write(1,1, "Nom", header);
     xlsx.write(1,2, "Prénom(s)", header);
      xlsx.write(1,3, "Genre", header);
       xlsx.write(1,4, "Departement", header);
        xlsx.write(1,5, "Classe", header);
         xlsx.write(1,6, "Session", header);
         xlsx.write(1,7, "Annee", header);
         xlsx.saveAs("C:\\Users\\Public\\model.xslx");
         QUrl fileUrl =QUrl::fromLocalFile("C:\\Users\\Public\\model.xslx");
         QDesktopServices::openUrl(fileUrl);


}

