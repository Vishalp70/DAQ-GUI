#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QProcess>
#include <QTextEdit>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //recieve process
    rxProcess = new QProcess(this);

    // When new data is available from auto_Rx_file.py
    connect(rxProcess, &QProcess::readyReadStandardOutput, this, [=]() {
        QString output = rxProcess->readAllStandardOutput();
        ui->terminalRxOutput->append(output.trimmed()); // <-- your second QTextEdit
    });

    connect(rxProcess, &QProcess::readyReadStandardError, this, [=]() {
        QString errorOutput = rxProcess->readAllStandardError();
        ui->terminalRxOutput->append("[ERROR] " + errorOutput.trimmed());
    });

    connect(rxProcess, &QProcess::readyReadStandardOutput, this, &MainWindow::readRxOutput);

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_startread_clicked()
{
    QProcess *process = new QProcess(this);

    connect(process, &QProcess::readyReadStandardOutput, this, [=]() {
        QString output = process->readAllStandardOutput();
        ui->terminalOutput->append(output.trimmed());
    });

    connect(process, &QProcess::readyReadStandardError, this, [=]() {
        QString errorOutput = process->readAllStandardError();
        ui->terminalOutput->append("[ERROR] " + errorOutput.trimmed());
    });

    // Run the Python script with argument "1"
    process->start("python", QStringList() << "auto_Tx.py" << "1");

    rxProcess->start("python", QStringList() << "auto_Rx_file.py");

}


void MainWindow::on_reset_clicked()
{
    QProcess *process = new QProcess(this);

    connect(process, &QProcess::readyReadStandardOutput, this, [=]() {
        QString output = process->readAllStandardOutput();
        ui->terminalOutput->append(output.trimmed());
    });

    connect(process, &QProcess::readyReadStandardError, this, [=]() {
        QString errorOutput = process->readAllStandardError();
        ui->terminalOutput->append("[ERROR] " + errorOutput.trimmed());
    });

    // Run the Python script with argument "3"
    process->start("python", QStringList() << "auto_Tx.py" << "3");
}


void MainWindow::on_stop_clicked()
{
    QProcess *process = new QProcess(this);

    connect(process, &QProcess::readyReadStandardOutput, this, [=]() {
        QString output = process->readAllStandardOutput();
        ui->terminalOutput->append(output.trimmed());
    });

    connect(process, &QProcess::readyReadStandardError, this, [=]() {
        QString errorOutput = process->readAllStandardError();
        ui->terminalOutput->append("[ERROR] " + errorOutput.trimmed());
    });

    // Run the Python script with argument "2"
    process->start("python", QStringList() << "auto_Tx.py" << "2");
}


void MainWindow::on_exit_clicked()
{
    QApplication::quit();
}


void MainWindow::readRxOutput() {
    QString output = rxProcess->readAllStandardOutput();
    ui->terminalRxOutput->append(output.trimmed());
}

void MainWindow::on_analyzeButton_clicked()
{
    QProcess *analyzeProcess = new QProcess(this);
    analyzeProcess->start("cmd", QStringList() << "/c" << "start cmd /k root -l -q data_frame_reader.C");

}



