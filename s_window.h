#ifndef S_WINDOW_H
#define S_WINDOW_H


#include <QWidget>
#include <QWindow>
#include "Task_Set.h"
#include "Block.h"
#include <QtGui>
#include <QtCore>

class s_window : public QWidget
{
    Q_OBJECT

public:
    s_window(QWidget *parent =0);
    ~s_window();   
    bool getBlocks(full_Block *fbptr);
    void drawLines(QPainter *qp);
    QPoint mp;

public slots:

protected:
    void mousePressEvent(QMouseEvent * e);
    void paintEvent(QPaintEvent *e);  
    full_Block *fb;
private slots:
private:
qreal scale;
bool zoomed;
int count;
};


#endif // S_WINDOW_H
