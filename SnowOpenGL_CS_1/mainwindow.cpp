#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>



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





void MainWindow::on_pushButton_clicked()
{

    ui->widget->Change_Sun();


    ui->widget->Snow();
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;
    ui->widget->paintGL();
    ui->widget->update();
}



void MainWindow::on_up_clicked()
{
    float alpha = ui->widget->xAlpha;


    alpha = alpha++ > 180 ? 180 : alpha;

    ui->widget->xAlpha = alpha;

    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->paintGL();
    ui->widget->update();



}

void MainWindow::on_down_clicked()
{
    int alpha = ui->widget->xAlpha;

    alpha = --alpha < 0 ? 0 : alpha;

    ui->widget->xAlpha = alpha;

    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_left_clicked()
{
    int alpha = ui->widget->zAlpha;

    alpha+=3;

    ui->widget->zAlpha = alpha;

    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_right_clicked()
{
    int alpha = ui->widget->zAlpha;

    alpha-=3;

    ui->widget->zAlpha = alpha;

    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_w__clicked()
{
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->speed = 0.5;
    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_s__clicked()
{
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->speed = -0.5;
    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_a__clicked()
{
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->speed = 0.5;
    ui->widget->ugol -= M_PI*0.5;
    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_d__clicked()
{
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->speed = 0.5;
    ui->widget->ugol += M_PI*0.5;
    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_change_z_sliderMoved(int position)
{
    ui->widget->zPoint = position;

    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;

    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_snow_actionTriggered(int action)
{
    ui->widget->Snow();
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;
    ui->widget->paintGL();
    ui->widget->update();
}



void MainWindow::on_sun_sliderMoved(int position)
{
    ui->widget->alpha = position;
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;
    ui->widget->paintGL();
    ui->widget->update();
}

void MainWindow::on_time_sliderMoved(int position)
{
    ui->widget->alpha += 0.5;

    ui->sun->setValue(ui->widget->alpha);
    ui->widget->Snow();
    ui->widget->speed = 0;
    ui->widget->ugol = -ui->widget->zAlpha / 180 * M_PI;
    ui->widget->paintGL();
    ui->widget->update();
}
