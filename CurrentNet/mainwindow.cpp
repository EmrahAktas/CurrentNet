#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    createMenus();
    createFileActions();

    scene = new DrawingScene(this);
    scene->setSceneRect(QRectF(0, 0, 1000, 1000));
    view = new DrawingView(scene, this);
    setCentralWidget(view);

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
    createViewActions();

    editMenu = menuBar()->addMenu(tr("&Edit"));
    createEditActions();
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

void MainWindow::createViewActions()
{

}

void MainWindow::createEditActions()
{

}

void MainWindow::onOpenFile()
{
    qDebug() << "onOpenFile";
}

void MainWindow::onCreateNewBlankPage()
{
    qDebug() << "onCreateNewBlankPage";
}







