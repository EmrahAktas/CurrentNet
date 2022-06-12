#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    createMenus();
    createFileActions();




    setWindowTitle(tr("CurrentNet"));
}

MainWindow::~MainWindow()
{
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    createFileActions();
    fileMenu->addAction(openFileAction);
    fileMenu->addSeparator();
    fileMenu->addAction(newFileAction);

    viewMenu = menuBar()->addMenu(tr("&View"));

    editMenu = menuBar()->addMenu(tr("&Edit"));
}

void MainWindow::createFileActions()
{
    openFileAction = new QAction(tr("Open File"), this);
    openFileAction->setShortcut(tr("Ctrl+O"));
    connect(openFileAction, &QAction::triggered, this, &MainWindow::onOpenFile);

    newFileAction = new QAction(tr("New File"), this);
    newFileAction->setShortcut(tr("Ctrl+N"));
    connect(newFileAction, &QAction::triggered, this, &MainWindow::onCreateNewBlankPage);
}

void MainWindow::onOpenFile()
{
    qDebug() << "onOpenFile";
}

void MainWindow::onCreateNewBlankPage()
{
    qDebug() << "onCreateNewBlankPage";
}







