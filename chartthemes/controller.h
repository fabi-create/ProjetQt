#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "authentification.h"
#include "mainwindow.h"
#include "usermodel.h"
#include "formatexcel.h"
#include "personmodel.h"
#include "parcourir.h"
#include "themeWidget.h"
#include <QFileDialog>

#include"uipersonlist.h"

#include"uiclasselist.h"

//#include"find.h"
#include <QMessageBox>
#include <QObject>
#include <QWidget>

#include <QtWidgets/QWidget>
#include <QtCharts/QChartGlobal>
#include "uimain.h"


#include "themewidget.h"
#include "ui_themewidget.h"


#include <QString>


#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QAbstractBarSeries>
#include <QtCharts/QPercentBarSeries>
#include <QtCharts/QStackedBarSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLineSeries>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QScatterSeries>
#include <QtCharts/QAreaSeries>
#include <QtCharts/QLegend>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtCore/QRandomGenerator>
#include <QtCharts/QBarCategoryAxis>
#include <QtWidgets/QApplication>
#include <QtCharts/QValueAxis>

class Controller : public QObject
{
    Q_OBJECT

private:
    /* Le controleur dispose des références
     * aux fenêtres qu'il gère.
     */
    authentification* Authentification;
    MainWindow* mainWindow;
    UserModel *userModel;
    PersonModel *personModel;
    parcourir *Parcourir;
    ThemeWidget *themeWidget;


   uipersonlist *personList;
   uiclasselist *classelist;


   /*
    Find *personFind;
    */
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    void execute ();

private slots:
    // Les slots de la fenêtre MainWindow
    void onCloseMainWindow();
    void onFormatMainWindow();
    void onCreatePerson();

    // les slots de la fenetre parcourir

    void onDisplayParcourir();


   void onParcourir();
   void choisir();
   void enregistrer();
   void close();
   void onDisplayPersonsList();
   void onDisplayPersonsListClasse();
   void onUpdateMainWindow();

   //void onStatistiqueMainWindow();

// Les slots de la gestion de la recherche
   void onFindMainWindow();


    // Les slots de la gestion de la liste
    void onClosePersonsListWindow();
    void onDeletePerson() ;
     void onUpdatePerson();

    // Les slots de la gestion de la liste par classe
    void onCloseClasseListWindow();
     void onDeletePersonClasse() ;
      void onUpdatePersonClasse();
   //    void onFindClasse();


     /*void onFindPerson();
     void onNotFindPerson();
*/

 // void onSearch();
    // Les slots de la fenêtre Authentification
    void onSubmitAuthentification();
    void onCancelAuthentification();
signals:

};

#endif // CONTROLLER_H


