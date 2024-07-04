#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QtMath>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , model(new QStringListModel(this))
{
    ui->setupUi(this);


    dialog = new QDialog(this);
    dialog->setWindowTitle("Settings");
    dialog->setModal(true);


    QMenuBar *menuBar = new QMenuBar(this);
    QMenu *fileMenu = new QMenu("File", this);
    QAction *exitAction = fileMenu->addAction("Exit");
    connect(exitAction, &QAction::triggered, this, &MainWindow::close);
    menuBar->addMenu(fileMenu);
    this->setMenuBar(menuBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calculateButton_clicked()
{
    x=ui->lineEdit->text().toDouble();
        double xsh;
        xsh=sinh(x);
        ui->label->setText(QString::number(xsh));
}


void MainWindow::on_calculateButton_2_clicked()
{
    x=ui->lineEdit->text().toDouble();
        double xsh;
        xsh=cosh(x);
        ui->label->setText(QString::number(xsh));
}







void MainWindow::on_calculateButton_3_clicked()
{
    x=ui->lineEdit->text().toDouble();
        double xsh;
        xsh=sinh(x)/cosh(x);
        ui->label->setText(QString::number(xsh));
}


void MainWindow::on_calculateButton_4_clicked()
{
    x=ui->lineEdit->text().toDouble();
    if(x==0){
        QMessageBox::critical(this, "Error occured", "X doesnt match the range");
    }
    else
    {
        double xsh;
        xsh=cosh(x)/sinh(x);
        ui->label->setText(QString::number(xsh));

    }
}


void MainWindow::on_showdialog_clicked()
{
    dialog->exec();
}


void MainWindow::on_textEdit_textChanged()
{

}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        ui->textEdit->hide();
        ui->label_3->hide();
    }
    else{
        ui->textEdit->show();
        ui->label_3->show();

    }
}




void MainWindow::on_comboBox_activated(int index)
{

    }

