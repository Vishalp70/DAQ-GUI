#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qprocess.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startread_clicked();

    void on_reset_clicked();

    void on_stop_clicked();

    void on_exit_clicked();

    void readRxOutput();

    void on_analyzeButton_clicked();

private:
    Ui::MainWindow *ui;

    QProcess *rxProcess;
};
#endif // MAINWINDOW_H
