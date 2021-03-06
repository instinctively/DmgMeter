#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUrl>
#include <QDesktopServices>

using namespace GW2;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_RecorderThread(ui)
{
    ui->setupUi(this);
    ui->toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
    this->setWindowFlags(Qt::WindowStaysOnTopHint | Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
    QObject::connect(ui->actionEnableOpacity, SIGNAL(triggered(bool)), this, SLOT(EnableOpacity(bool)));
    QObject::connect(ui->actionHelp, SIGNAL(triggered()), this, SLOT(LinkToWebsite()));
    m_RecorderThread.start();
}

MainWindow::~MainWindow()
{
    // Terminating the thread can result in a read access violation
//    m_RecorderThread.terminate();
//    m_RecorderThread.wait();

    delete ui;
}

void MainWindow::EnableOpacity(bool isOpaque)
{
    if (isOpaque)
    {
        this->setWindowOpacity(0.4);
    }
    else
    {
        this->setWindowOpacity(1.0);
    }
}

void MainWindow::LinkToWebsite()
{
    QDesktopServices::openUrl(QUrl(MAINWINDOW_WEBSITE_URL));
}
