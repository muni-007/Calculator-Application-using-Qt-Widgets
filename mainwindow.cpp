 #include "mainwindow.h"
#include "ui_mainwindow.h"

double first_input;
bool divideTrigger=false;
bool multipleTrigger=false;
bool addTrigger=false;
bool subTrigger=false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->add,SIGNAL(clicked()),this,SLOT(arithmetic_pressed()));   //Here Add pushButton emits signal and Arithmetic function slots the emitted signal
    connect(ui->sub,SIGNAL(clicked()),this,SLOT(arithmetic_pressed()));     //Here sub pushButton emits signal and Arithmetic function slots the emitted signal
    connect(ui->multiple,SIGNAL(clicked()),this,SLOT(arithmetic_pressed()));   //Here multiple pushButton emits signal and Arithmetic function slots the emitted signal
    connect(ui->divide,SIGNAL(clicked()),this,SLOT(arithmetic_pressed()));    //Here divide pushButton emits signal and Arithmetic function slots the emitted signal
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_back_released()                 //When Backspace Button released pop the single character from text label
{
    QString temp=ui->display->text();              //Returns display text into temp variable
    QString result=temp.mid(0,temp.length()-1);    //Returns a string that contains temp variable_length-1 and inital index position of this string
    ui->display->setText(result);
}


void MainWindow::on_pushButton_7_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"7");               //pushButton_7 released then text "7" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_8_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"8");             //pushButton_8 released then text "8" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_9_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"9");            //pushButton_9 released then text "9" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_4_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"4");            //pushButton_4 released then text "4" added to previous temp variable text,diplay the label
}




void MainWindow::on_pushButton_5_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"5");            //pushButton_5 released then text "5" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_6_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"6");          //pushButton_6 released then text "6" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_1_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"1");          //pushButton_1 released then text "1" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_2_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"2");         //pushButton_2 released then text "2" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_3_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"3");         //pushButton_3 released then text "3" added to previous temp variable text,diplay the label
}


void MainWindow::on_pushButton_0_released()
{
    QString temp=ui->display->text();
    ui->display->setText(temp+"0");         //pushButton_0 released then text "0" added to previous temp variable text,diplay the label
}


void MainWindow::on_clear_clicked()   //when clear_PushButton clicked
{
    ui->display->setText("");         //By placing setText as empty space gets Label Display cleared
}


void MainWindow::on_dot_released()
{
    if(!(ui->display->text().isEmpty())){                   //if-conditional statement states flase condition
        ui->display->setText(ui->display->text()+".");      //String dot text "." added to previous text,display the text
    ui->dot->setEnabled(false);                             //here dot_PushButton is disabled after one time released,to aviod multiple-dots in single number

}
    else{                                                   //when text in  display is Empty ,this statement exists
        ui->display->setText("0."+ui->display->text());     //String dot text "0." added to previous text,display the text
     ui->dot->setEnabled(false);
}
}



void MainWindow::on_plusminus_released()
{
    double labelNumber;                               //intializing labelNumber as double
    QString newlabel;                                 //intializing newlabel as string
    labelNumber=ui->display->text().toDouble();       //converting string into double
    labelNumber=labelNumber * -1;
    newlabel=QString::number(labelNumber);            //Returns a string equivalent of the number labelNumber according to the specified base.
    ui->display->setText(newlabel);
}


void MainWindow::on_percent_released()
{
    //double labelNumber;
    //QString newlabel;
    double labelNumber=ui->display->text().toDouble();   //converting string into double
    labelNumber=labelNumber * 0.01;
    QString newlabel=QString::number(labelNumber);       //Returns a string equivalent of the number labelNumber according to the specified base.
    ui->display->setText(newlabel);

}
void MainWindow::arithmetic_pressed()
{
    divideTrigger=false;                         //intializing divideTrigger in boolean as local_variable
    multipleTrigger=false;                       //intializing multipleTrigger in boolean as local_variable
    addTrigger=false;                            //intializing addTrigger in boolean as local_variable
    subTrigger=false;                           //intializing subTrigger in boolean as local_variable

    first_input=ui->display->text().toDouble();

     QPushButton *Button=(QPushButton*)sender();     //Returns a pointer to the Button in QPushButton class that sent the signal
     QString newlabel=Button->text();                //stores the sorted text in newlabel

     if(QString::compare(newlabel,"+",Qt::CaseInsensitive)==0){   //comparing Button Text and "+"
        addTrigger=true;                                          //if condition True ,then AddTrigger is activated
     }
     else if(QString::compare(newlabel,"-",Qt::CaseInsensitive)==0){ //comparing Button Text and "-"
         subTrigger=true;                                          //if condition True ,then SubTrigger is activated
     }
     else if(QString::compare(newlabel,"*",Qt::CaseInsensitive)==0){   //comparing Button Text and "*"
         multipleTrigger=true;                                     //if condition True ,then multipleTrigger is activated
     }
     else if(QString::compare(newlabel,"/",Qt::CaseInsensitive)==0){   //comparing Button Text and "/"
         divideTrigger=true;                                      //if condition True ,then divideTrigger is activated
     }
     ui->display->setText("");                 //clearing display label
}



void MainWindow::on_equal_pressed()
{
    double second_input,labelNumber;                    //Intializing
    second_input=ui->display->text().toDouble();     //setText of second_Input in double
    QString newlabel;
    if(addTrigger)                                  //if AddTrigger is True
    {
        labelNumber=first_input + second_input;     //Addtion operation of Two inputs stores in label
        newlabel=QString::number(labelNumber);      //Returns a string equivalent of the number labelNumber according to the specified base
        //ui->display->setText(newlabel);
    }
    else if(subTrigger)                             //if SubTrigger is True
    {
        labelNumber=first_input - second_input;     //subtraction operation of Two inputs stores in label
        newlabel=QString::number(labelNumber);      //Returns a string equivalent of the number labelNumber according to the specified base
        //ui->display->setText(newlabel);
    }
    else if(multipleTrigger)                       //if multipleTrigger is True
    {
        labelNumber=first_input * second_input;    //multiplication operation of Two inputs stores in label
        newlabel=QString::number(labelNumber);     //Returns a string equivalent of the number labelNumber according to the specified base
        //ui->display->setText(newlabel);
    }
    else if(divideTrigger)                         //if divideTrigger is True
    {
        labelNumber=first_input/second_input;     //division operation of Two inputs stores in label
        newlabel=QString::number(labelNumber);    //Returns a string equivalent of the number labelNumber according to the specified base
        //ui->display->setText(newlabel);
    }
    ui->display->setText(newlabel);           //display newlabel text in label
}

