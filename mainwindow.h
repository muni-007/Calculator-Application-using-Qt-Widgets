#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_back_released();

    void on_pushButton_7_released();

    void on_pushButton_8_released();

    void on_pushButton_9_released();

    void on_pushButton_4_released();

    void on_pushButton_5_released();

    void on_pushButton_6_released();

    void on_pushButton_1_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();

    void on_pushButton_0_released();

    void on_clear_clicked();

    void on_dot_released();

    void on_plusminus_released();

    void on_percent_released();

    void arithmetic_pressed();

    void on_equal_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
