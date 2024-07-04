#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QRadioButton>
#include <QListView>
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QStringListModel>

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
    void on_calculateButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_calculateButton_2_clicked();

    void on_calculateButton_3_clicked();

    void on_calculateButton_4_clicked();

    void on_showdialog_clicked();

    void on_textEdit_textChanged();

    void on_checkBox_stateChanged(int arg1);

    void on_comboBox_activated(int index);

private:
    Ui::MainWindow *ui;
    double x;
    QDialog *dialog;
    QStringListModel *model;
};
#endif // MAINWINDOW_H
