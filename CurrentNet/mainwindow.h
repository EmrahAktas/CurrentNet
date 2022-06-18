#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QAction>

#include "drawingscene.h"
#include "drawingview.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    //Menu
    QMenu* fileMenu;
    QMenu* viewMenu;
    QMenu* editMenu;
    QAction* openFileAction;
    QAction* newFileAction;
    void createMenus();
    void createFileActions();
    void createViewActions();
    void createEditActions();

    //Scene and View
    DrawingScene* scene;
    DrawingView* view;

private slots:
    void onOpenFile();
    void onCreateNewBlankPage();

};
#endif // MAINWINDOW_H
