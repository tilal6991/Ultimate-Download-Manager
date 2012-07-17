#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include <QTabBar>
#include "downloadfile.h"
#include "adddialog.h"
#include "detailstab.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void setProgress(WgetProgressObject* cmdoutput);
    void setItem(WgetProgressObject* cmdoutput);
    void setItem(QString status, int index = 2);
    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);
    void on_tableWidget_itemSelectionChanged();
    void on_tabWidgetMain_tabCloseRequested(int index);
    void on_tabWidgetMain_currentChanged(int index);

private:
    Ui::MainWindow *ui;
    QList<DownloadFile*> listOfDownloads;
    int downloadsCount;
};

#endif // MAINWINDOW_H