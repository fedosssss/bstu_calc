#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
double MainWindow::getLineEditNum(){
    num1=ui->lineEdit->text().toDouble();
    num2=ui->lineEdit_2->text().toDouble();
    return num1;
    return num2;

}

double MainWindow::getLineEditNum_2(){
    num1=ui->lineEdit->text().toDouble();
    return num1;

}
void MainWindow::writeLabelResult(double tempResult){
    ui->label->setText(QString::number(tempResult));
    res=0;
    mem=0;
}


void MainWindow::on_plus_clicked()
{
    getLineEditNum();
    res=num1+num2;
    writeLabelResult(res);


}


void MainWindow::on_minus_clicked()
{
    getLineEditNum();
    res=num1-num2;
    writeLabelResult(res);
}


void MainWindow::on_mult_clicked()
{
    getLineEditNum();
    res=num1*num2;
    writeLabelResult(res);
}


void MainWindow::on_divlabel_clicked()
{
    getLineEditNum();
    res=num1/num2;
    writeLabelResult(res);
}


void MainWindow::on_clearize_clicked()
{
    ui->lineEdit->setText(NULL);
    ui->lineEdit_2->setText(NULL);
    ui->label->setText("Result");
}


void MainWindow::on_sqr_clicked()
{
    getLineEditNum_2();
    res=sqrt(num1);
    writeLabelResult(res);
}


void MainWindow::on_cos_clicked()
{
    getLineEditNum_2();
    res=round(cos(num1*3.14/180));
    writeLabelResult(res);
}


void MainWindow::on_sin_clicked()
{
    getLineEditNum_2();
    res=sin(num1*3.14/180);
    writeLabelResult(res);
}


void MainWindow::on_pow_clicked()
{
    getLineEditNum_2();
    res=num1*num1;
    writeLabelResult(res);
}


void MainWindow::on_tan_clicked()
{
    if (getLineEditNum_2()!= double(90) && getLineEditNum_2() != double(270)){
    getLineEditNum_2();
    res=tan(num1*3.14/180);
    writeLabelResult(res);
    }
    else{
        ui->label->setText("not determined");
    }
}

void MainWindow::on_ctg_clicked()
{
    if(getLineEditNum_2()!=double(0) && getLineEditNum_2()!=double(180) && getLineEditNum_2()!=double(360)){
    getLineEditNum_2();
    m_sin=sin(num1*3.14/180);
    m_cos=cos(num1*3.14/180);
    res=m_cos/m_sin;
    writeLabelResult(res);
    }
    else{
        ui->label->setText("not determined");
    }
}





void MainWindow::on_pow_2_clicked()
{
    getLineEditNum_2();
    res=num1*num1*num1;
    writeLabelResult(res);
}

void MainWindow::on_sin_2_clicked()
{
    getLineEditNum_2();
    res=asinh(num1);
    writeLabelResult(res);
}


void MainWindow::on_cos_2_clicked()
{
    getLineEditNum_2();
    res=acos(num1*3.14/180);
    writeLabelResult(res);
}


void MainWindow::on_tan_2_clicked()
{
    getLineEditNum_2();
    res=atan(num1*3.14/180);
    writeLabelResult(res);
}


void MainWindow::on_ctg_2_clicked()
{
    getLineEditNum_2();
    m_sin=sin(num1*3.14/180);
    m_cos=cos(num1*3.14/180);
    res=mem/res;

    writeLabelResult(res);
}

