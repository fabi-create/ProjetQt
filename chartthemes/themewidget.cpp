// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

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




ThemeWidget::ThemeWidget(QWidget *parent) :
    QWidget(parent),
    m_listCount(3),
    m_valueMax(10),
    m_valueCount(7),
    m_dataTable(generateRandomData(m_listCount, m_valueMax, m_valueCount)),
    m_ui(new Ui_ThemeWidgetForm)
{
    m_ui->setupUi(this);
    populateThemeBox();
    populateAnimationBox();
    populateLegendBox();

    //create charts
/*
    QChartView *chartView;

    chartView = new QChartView(createAreaChart());
    m_ui->gridLayout->addWidget(chartView, 1, 0);
    m_charts << chartView;

    chartView = new QChartView(createPieChart());
    // Funny things happen if the pie slice labels do not fit the screen, so we ignore size policy
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    m_ui->gridLayout->addWidget(chartView, 1, 1);
    m_charts << chartView;

    //![5]
    chartView = new QChartView(createLineChart());
    m_ui->gridLayout->addWidget(chartView, 1, 2);
    //![5]
    m_charts << chartView;

    chartView = new QChartView(createBarChart());
    m_ui->gridLayout->addWidget(chartView, 2, 0);
    m_charts << chartView;

    chartView = new QChartView(createSplineChart());
    m_ui->gridLayout->addWidget(chartView, 2, 1);
    m_charts << chartView;

    chartView = new QChartView(createScatterChart());
    m_ui->gridLayout->addWidget(chartView, 2, 2);
    m_charts << chartView;
*/
    // Set defaults
    m_ui->antialiasCheckBox->setChecked(true);

    // Set the colors from the light theme as default ones
    QPalette pal = qApp->palette();
    pal.setColor(QPalette::Window, QRgb(0xf0f0f0));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    qApp->setPalette(pal);

    updateUI();
}

ThemeWidget::ThemeWidget(QObject *controller):
    m_listCount(3),
    m_valueMax(10),
    m_valueCount(7),
    m_dataTable(generateRandomData(m_listCount, m_valueMax, m_valueCount)),
    m_ui(new Ui_ThemeWidgetForm)
{
   dbaccess=DBAccess::getInstance();
    m_ui->setupUi(this);
    populateThemeBox();
    populateAnimationBox();
    populateLegendBox();

    //create charts
  QChartView *chartView;

    //  QChartView *chartView;
    int id=m_ui->comboBoxSort->currentIndex();

    if(id==0){
          QChartView *chartView;
        chartView = new QChartView(createBarChart());
        m_ui->gridLayout->addWidget(chartView, 2, 0);
        m_charts << chartView;

    }
    else if (id==2){
          QChartView *chartView;
    chartView = new QChartView(createPieChart());
    // Funny things happen if the pie slice labels do not fit the screen, so we ignore size policy
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    m_ui->gridLayout->addWidget(chartView, 1, 1);
    m_charts << chartView;
    }
    else if (id==1){
          QChartView *chartView;
        chartView = new QChartView(createAreaChart());
        m_ui->gridLayout->addWidget(chartView, 1, 0);
        m_charts << chartView;
    }
    else if(id==3){
        //![5]
          QChartView *chartView;
        chartView = new QChartView(createLineChart());
        m_ui->gridLayout->addWidget(chartView, 1, 2);
        //![5]
        m_charts << chartView;

    }

/*
    chartView = new QChartView(createPieChart());
    // Funny things happen if the pie slice labels do not fit the screen, so we ignore size policy
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    m_ui->gridLayout->addWidget(chartView, 1, 1);
    m_charts << chartView;
*/

/*
    chartView = new QChartView(createBarChart());
    m_ui->gridLayout->addWidget(chartView, 2, 0);
    m_charts << chartView;
*/


    chartView = new QChartView(createSplineChart());
    m_ui->gridLayout->addWidget(chartView, 2, 1);
    m_charts << chartView;

    chartView = new QChartView(createScatterChart());
    m_ui->gridLayout->addWidget(chartView, 2, 2);
    m_charts << chartView;


    // Set defaults
    m_ui->antialiasCheckBox->setChecked(true);

    // Set the colors from the light theme as default ones
    QPalette pal = qApp->palette();
    pal.setColor(QPalette::Window, QRgb(0xf0f0f0));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    qApp->setPalette(pal);

    updateUI();





        //create charts

    connect(m_ui->comboBoxSort, SIGNAL(currentIndexChanged(int)),this, SLOT(onChange()));




 connect(m_ui->pushButtonListEtudiant,SIGNAL(clicked()),controller,SLOT(onDisplayPersonsList()));

 connect(m_ui->pushButtonRetour,SIGNAL(clicked()),controller,SLOT(onDisplayPersonsListClasse()));
   }

ThemeWidget::~ThemeWidget() {

    delete m_ui;
}

DataTable ThemeWidget::generateRandomData(int listCount, int valueMax, int valueCount) const
{
    DataTable dataTable;

    // generate random data
    for (int i(0); i < listCount; i++) {
        DataList dataList;
        qreal yValue(0);
        for (int j(0); j < valueCount; j++) {
            yValue = yValue + QRandomGenerator::global()->bounded(valueMax / (qreal) valueCount);
            QPointF value((j + QRandomGenerator::global()->generateDouble()) * ((qreal) m_valueMax / (qreal) valueCount),
                          yValue);
            QString label = "Slice " + QString::number(i) + ":" + QString::number(j);
            dataList << Data(value, label);
        }
        dataTable << dataList;
    }

    return dataTable;
}

void ThemeWidget::populateThemeBox()
{
    // add items to theme combobox
    m_ui->themeComboBox->addItem("Light", QChart::ChartThemeLight);
    m_ui->themeComboBox->addItem("Blue Cerulean", QChart::ChartThemeBlueCerulean);
    m_ui->themeComboBox->addItem("Dark", QChart::ChartThemeDark);
    m_ui->themeComboBox->addItem("Brown Sand", QChart::ChartThemeBrownSand);
    m_ui->themeComboBox->addItem("Blue NCS", QChart::ChartThemeBlueNcs);
    m_ui->themeComboBox->addItem("High Contrast", QChart::ChartThemeHighContrast);
    m_ui->themeComboBox->addItem("Blue Icy", QChart::ChartThemeBlueIcy);
    m_ui->themeComboBox->addItem("Qt", QChart::ChartThemeQt);
}

void ThemeWidget::populateAnimationBox()
{
    // add items to animation combobox
    m_ui->animatedComboBox->addItem("No Animations", QChart::NoAnimation);
    m_ui->animatedComboBox->addItem("GridAxis Animations", QChart::GridAxisAnimations);
    m_ui->animatedComboBox->addItem("Series Animations", QChart::SeriesAnimations);
    m_ui->animatedComboBox->addItem("All Animations", QChart::AllAnimations);
}

void ThemeWidget::populateLegendBox()
{
    // add items to legend combobox
    m_ui->legendComboBox->addItem("No Legend ", 0);
    m_ui->legendComboBox->addItem("Legend Top", Qt::AlignTop);
    m_ui->legendComboBox->addItem("Legend Bottom", Qt::AlignBottom);
    m_ui->legendComboBox->addItem("Legend Left", Qt::AlignLeft);
    m_ui->legendComboBox->addItem("Legend Right", Qt::AlignRight);
}
/*
QChart *ThemeWidget::createAreaChart() const
{
    QChart *chart = new QChart();
    chart->setTitle("Nombre d'etudiants par departement");

    dbaccess->open();
        QSqlQuery query;
        query.exec("SELECT departement , COUNT(*) FROM t_persons GROUP BY departement");

    // The lower series initialized to zero values
    QLineSeries *lowerSeries = 0;
    QString name("Series ");
    int nameIndex = 0;
     while (query.next()){
         QString genre = query.value(0).toString();
                 int count = query.value(1).toInt();
                 upperSeries->append(departement, count);
                 series->append(genre, count);
                 series->setLabelsVisible(true);


     }


    for (int i(0); i < m_dataTable.count(); i++) {
        QLineSeries *upperSeries = new QLineSeries(chart);
        for (int j(0); j < m_dataTable[i].count(); j++) {
            Data data = m_dataTable[i].at(j);
            if (lowerSeries) {
                const auto &points = lowerSeries->points();
                upperSeries->append(QPointF(j, points[i].y() + data.first.y()));
            } else {
                upperSeries->append(QPointF(j, data.first.y()));
            }
        }
        QAreaSeries *area = new QAreaSeries(upperSeries, lowerSeries);
        area->setName(name + QString::number(nameIndex));
        nameIndex++;
        chart->addSeries(area);
        lowerSeries = upperSeries;
    }

    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(0, m_valueCount - 1);
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueMax);
    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");



    return chart;
}
*/
QChart *ThemeWidget::createAreaChart() const
{
    QChart *chart = new QChart();
    chart->setTitle("Nombre d'etudiants par departement");

    dbaccess->open();
        QSqlQuery query;
        query.exec("SELECT departement , COUNT(*) FROM t_persons GROUP BY departement");


    QLineSeries *lineSeries = new QLineSeries();
    QAreaSeries *areaSeries = new QAreaSeries(lineSeries);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->setTitleText("Departements");

   //chart->setAxisX(axisX, lineSeries); // Ajouter l'axe X à la chart

    while (query.next()) {
        QString departement = query.value(0).toString();
        int count = query.value(1).toInt();
        //QBarSet *set=new QBarSet(filiere);
        //*set <<count;
        //series->append(set);
        *lineSeries << QPointF(axisX->count(), count); // Ajouter le point de données au QLineSeries avec l'axe X en utilisant la méthode count() de l'axe X
        axisX->append(departement); // Ajouter la filière à la liste des catégories de l'axe X

       // Ajouter une entrée de légende pour chaque filière
  //     chart->legend()->markers(lineSeries).back()->setLabel(departement);
    }

    chart->addSeries(areaSeries);
    //chart->addSeries(series);
    chart->setTitle("Nombre d'étudiants par classe");
    chart->setAnimationOptions(QChart::SeriesAnimations); // Activer les animations
    chart->createDefaultAxes(); // Créer les axes par défaut
    chart->legend()->setVisible(true); // Afficher la légende

    return chart;

}


QChart *ThemeWidget::createBarChart() const
{



    // Q_UNUSED(valueCount);
        QChart *chart = new QChart();
        chart->setTitle("Répartition des étudiants par classe et par session");

        QBarSeries *series = new QBarSeries(chart);
        dbaccess->open();

        QSqlQuery query;
        query.exec("SELECT classe,session, COUNT(*) FROM t_persons GROUP BY classe");

        //QPieSeries *series = new QPieSeries();
        int count;
        while (query.next()) {
            QString classe = query.value(0).toString();
            QString session = query.value(1).toString();
            QString classe_session=classe +" - "+session;
            count = query.value(2).toInt();
            QBarSet *set = new QBarSet(classe_session);

              *set <<count;
            series->append(set);

        }
        chart->addSeries(series);

        chart->createDefaultAxes();
        chart->axes(Qt::Vertical).first()->setRange(0, 100 * 2);
        // Add space to label to add space between labels and axis
        QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
        Q_ASSERT(axisY);
        axisY->setLabelFormat("%.1f  ");

        return chart;
}




QChart *ThemeWidget::createLineChart() const
{

    //![1]
    QChart *chart = new QChart();
    chart->setTitle("Nombre d'etudiants par session");
    //![1]
    dbaccess->open();
        QSqlQuery query;
        query.exec("SELECT session, COUNT(*) FROM t_persons GROUP BY session");
    //![2]
   // QString name("Series ");
   // int+ nameIndex = 0;
        int cpt=0;
    QLineSeries *series = new QLineSeries(chart);
         while (query.next()) {
              QString session= query.value(0).toString();
              int count = query.value(1).toInt();
             cpt ++;
             series->append(count,cpt);
    //      series->setLabelsVisible(true);
          }



    //    chart->addSeries(series);

    //![2]

        chart->addSeries(series);
            chart->setTitle("Répartition des étudiants par session");
            chart->setAnimationOptions(QChart::SeriesAnimations); // Activer les animations
            chart->legend()->setVisible(true); // Afficher la légende
            series->setName("session");

    //![3]
    chart->createDefaultAxes();
   chart->axes(Qt::Horizontal).first()->setRange(0, m_valueMax);
   chart->axes(Qt::Vertical).first()->setRange(0, m_valueCount);
    //![3]
    //![4]
    // Add space to label to add space between labels and axis
   QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
   Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");
    //![4]

    return chart;

/*
    QChart *chart = new QChart();
       chart->setTitle("effectif des Etudiant par option");


       QString name("Series ");
       int nameIndex = 0;
       QLineSeries *series = new QLineSeries(chart);
       dbaccess->open();

       QSqlQuery query;
       query.exec("SELECT session,COUNT(*) FROM etudiants group by session");


       int count;
       int nombre=0;
       while (query.next()) {
           QString session = query.value(0).toString();
           count = query.value(1).toInt();

           series->append(nombre,count);
           nombre++;

           series->setName(name + QString::number(nameIndex));
           nameIndex++;
         //

           // Add a label to each point
           QScatterSeries *labelSeries = new QScatterSeries(chart);
           labelSeries->append(nombre,count);
           labelSeries->setName(session);
           labelSeries->setMarkerSize(12.0);
           chart->addSeries(labelSeries);

           //
           QValueAxis *axeX = new QValueAxis;
           axeX->setTitleText(QString::fromUtf8("nombre d'etudiants par session"));
           labelSeries->attachAxis(axeX);



       }
       chart->addSeries(series);

       // Set up the axes
       QValueAxis *axeX = new QValueAxis;
       axeX->setTitleText(QString::fromUtf8("session"));
       axeX->setTitleText("session");
       chart->addAxis(axeX,Qt::AlignLeft);
       series->attachAxis(axeX);

       QValueAxis *axeY = new QValueAxis;
       axeY->setTitleText("nombre d'etudiant");
       chart->addAxis(axeY, Qt::AlignBottom);
       series->attachAxis(axeY);

*/


       return chart;




}

QChart *ThemeWidget::createPieChart() const
{
    dbaccess->open();
        QSqlQuery query;
        query.exec("SELECT sexe , COUNT(*) FROM t_persons GROUP BY sexe");
        QPieSeries *series = new QPieSeries();
        while (query.next()) {
            QString sexe = query.value(0).toString();
            int count = query.value(1).toInt();
            series->append(sexe, count);
            series->setLabelsVisible(true);
        }
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Répartition des étudiants par sexe");
        chart->setAnimationOptions(QChart::SeriesAnimations); // Activer les animations
        chart->legend()->setVisible(true); // Afficher la légende
        series->setName("sexe");
        return chart;

}


QChart *ThemeWidget::createSplineChart() const
{
    QChart *chart = new QChart();
    chart->setTitle("Spline chart");
    QString name("Series ");
    int nameIndex = 0;
    for (const DataList &list : m_dataTable) {
        QSplineSeries *series = new QSplineSeries(chart);
        for (const Data &data : list)
            series->append(data.first);
        series->setName(name + QString::number(nameIndex));
        nameIndex++;
        chart->addSeries(series);
    }

    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(0, m_valueMax);
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueCount);

    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");
    return chart;
}

QChart *ThemeWidget::createScatterChart() const
{
    // scatter chart
    QChart *chart = new QChart();
    chart->setTitle("Scatter chart");
    QString name("Series ");
    int nameIndex = 0;
    for (const DataList &list : m_dataTable) {
        QScatterSeries *series = new QScatterSeries(chart);
        for (const Data &data : list)
            series->append(data.first);
        series->setName(name + QString::number(nameIndex));
        nameIndex++;
        chart->addSeries(series);
    }

    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(0, m_valueMax);
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueCount);
    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");
    return chart;
}

void ThemeWidget::updateUI()
{
    //![6]
    QChart::ChartTheme theme = static_cast<QChart::ChartTheme>(
                m_ui->themeComboBox->itemData(m_ui->themeComboBox->currentIndex()).toInt());
    //![6]
    const auto charts = m_charts;
    if (!m_charts.isEmpty() && m_charts.at(0)->chart()->theme() != theme) {
        for (QChartView *chartView : charts) {
            //![7]
            chartView->chart()->setTheme(theme);
            //![7]
        }

        // Set palette colors based on selected theme
        //![8]
        QPalette pal = window()->palette();
        if (theme == QChart::ChartThemeLight) {
            pal.setColor(QPalette::Window, QRgb(0xf0f0f0));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        //![8]
        } else if (theme == QChart::ChartThemeDark) {
            pal.setColor(QPalette::Window, QRgb(0x121218));
            pal.setColor(QPalette::WindowText, QRgb(0xd6d6d6));
        } else if (theme == QChart::ChartThemeBlueCerulean) {
            pal.setColor(QPalette::Window, QRgb(0x40434a));
            pal.setColor(QPalette::WindowText, QRgb(0xd6d6d6));
        } else if (theme == QChart::ChartThemeBrownSand) {
            pal.setColor(QPalette::Window, QRgb(0x9e8965));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        } else if (theme == QChart::ChartThemeBlueNcs) {
            pal.setColor(QPalette::Window, QRgb(0x018bba));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        } else if (theme == QChart::ChartThemeHighContrast) {
            pal.setColor(QPalette::Window, QRgb(0xffab03));
            pal.setColor(QPalette::WindowText, QRgb(0x181818));
        } else if (theme == QChart::ChartThemeBlueIcy) {
            pal.setColor(QPalette::Window, QRgb(0xcee7f0));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        } else {
            pal.setColor(QPalette::Window, QRgb(0xf0f0f0));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        }
        window()->setPalette(pal);
    }

    // Update antialiasing
    //![11]
    bool checked = m_ui->antialiasCheckBox->isChecked();
    for (QChartView *chart : charts)
        chart->setRenderHint(QPainter::Antialiasing, checked);
    //![11]

    // Update animation options
    //![9]
    QChart::AnimationOptions options(
                m_ui->animatedComboBox->itemData(m_ui->animatedComboBox->currentIndex()).toInt());
    if (!m_charts.isEmpty() && m_charts.at(0)->chart()->animationOptions() != options) {
        for (QChartView *chartView : charts)
            chartView->chart()->setAnimationOptions(options);
    }
    //![9]

    // Update legend alignment
    //![10]
    Qt::Alignment alignment(
                m_ui->legendComboBox->itemData(m_ui->legendComboBox->currentIndex()).toInt());

    if (!alignment) {
        for (QChartView *chartView : charts)
            chartView->chart()->legend()->hide();
    } else {
        for (QChartView *chartView : charts) {
            chartView->chart()->legend()->setAlignment(alignment);
            chartView->chart()->legend()->show();
        }
    }
    //![10]
}
void ThemeWidget::onChange(){



    QChartView *chartView;
    int id=m_ui->comboBoxSort->currentIndex();

 if(id==2){
     chartView = new QChartView(createBarChart());
     m_ui->gridLayout->addWidget(chartView, 2, 0);
     m_charts << chartView;

 }
 else if(id==0){

     chartView = new QChartView(createPieChart());
     // Funny things happen if the pie slice labels do not fit the screen, so we ignore size policy
     chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
     m_ui->gridLayout->addWidget(chartView, 1, 1);
     m_charts << chartView;

 }
 else if(id==1){

     chartView = new QChartView(createAreaChart());
     m_ui->gridLayout->addWidget(chartView, 1, 0);
     m_charts << chartView;

 }
else if(id==3){

     //![5]
     chartView = new QChartView(createLineChart());
     m_ui->gridLayout->addWidget(chartView, 1, 2);
     //![5]
     m_charts << chartView;

 }
}

