#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    double num1=0, num2=0, res=0, m_sin=0, m_cos=0, mem=1;
    double getLineEditNum();
    double getLineEditNum_2();
    void writeLabelResult(double tempResult);

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plus_clicked();

    void on_minus_clicked();

    void on_mult_clicked();

    void on_divlabel_clicked();

    void on_clearize_clicked();

    void on_sqr_clicked();

    void on_sin_clicked();

    void on_cos_clicked();

    void on_pow_clicked();

    void on_tan_clicked();

    void on_ctg_clicked();

    void on_pow_2_clicked();

    void on_sin_2_clicked();


    void on_cos_2_clicked();

    void on_tan_2_clicked();

    void on_ctg_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
