
// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only


#ifndef THEMEWIDGET_H
#define THEMEWIDGET_H

#include <QtWidgets/QWidget>
#include <QtCharts/QChartGlobal>
#include "uimain.h"
#include <QWidget>
#include <QString>
#include "dbaccess.h"
#include <QSqlQuery>
#include <QSqlDatabase>

#include <QMainWindow>
#include "person.h"
#include "personmodel.h"




QT_BEGIN_NAMESPACE
class QComboBox;
class QCheckBox;
class Ui_ThemeWidgetForm;
QT_END_NAMESPACE

QT_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_END_NAMESPACE

typedef QPair<QPointF, QString> Data;
typedef QList<Data> DataList;
typedef QList<DataList> DataTable;

QT_USE_NAMESPACE

namespace Ui {
class ThemeWidget;
}


class ThemeWidget: public QWidget,public UIMain
{
    Q_OBJECT
public:
    explicit ThemeWidget(QWidget *parent = nullptr),
    ThemeWidget(QObject *controller);



            /*void updateBuilders();

            //void byTypeChartsBuilder(QList<Person> list);
               void byClassChartsBuilder();
               void byGenderChartsBuilder();
               void byDepartementChartsBuilder();
               */

   ~ThemeWidget();


private Q_SLOTS:
    void updateUI();
    void onChange();

   // void on_comboBoxSort_currentIndexChanged(int index);

private:
    DataTable generateRandomData(int listCount, int valueMax, int valueCount) const;
    void populateThemeBox();
    void populateAnimationBox();
    void populateLegendBox();
    void connectSignals();
    QChart *createAreaChart() const;
    QChart *createBarChart() const;
    QChart *createPieChart() const;
    QChart *createLineChart() const;
   QChart *createSplineChart() const;
  QChart *createScatterChart() const;




private:
    int m_listCount;
    int m_valueMax;
    int m_valueCount;
    QList<QChartView *> m_charts;
    DataTable m_dataTable;
    DBAccess* dbaccess;
    Ui_ThemeWidgetForm *m_ui;


  //  ChartSort chartSort;
    QChartView *chartView;
   // QList<QString> sexe;
  //  QList<QString> classe;
  //  QList<QString> departement;
};

#endif /* THEMEWIDGET_H */
