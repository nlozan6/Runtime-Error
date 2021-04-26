#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "loginDialog.h"
#include "databaseManager.h"
#include "databaseViewer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionLog_in_triggered();

    void on_actionLog_out_triggered();

    void on_actionView_Database_triggered();

private:
    Ui::MainWindow *ui;
    loginDialog* lDialog;
    databaseViewer* dbView;
    databaseManager* database;

    bool isAdmin;
};
#endif // MAINWINDOW_H
