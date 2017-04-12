#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_load_btn_clicked()
{
    QImage myImage;
    myImage.load("Tulips.bmp");

   // QLabel myLabel;
    ui->image_lbl->setPixmap(QPixmap::fromImage(myImage));

    //myLabel.show();
}
