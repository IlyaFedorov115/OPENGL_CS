#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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


    void on_pushButton_clicked();


    void on_up_clicked();

    void on_down_clicked();

    void on_left_clicked();

    void on_right_clicked();

    void on_w__clicked();

    void on_s__clicked();

    void on_a__clicked();

    void on_d__clicked();

    void on_change_z_sliderMoved(int position);

    void on_snow_actionTriggered(int action);

    void on_sun_sliderMoved(int position);

    void on_time_sliderMoved(int position);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
