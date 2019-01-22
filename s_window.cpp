#include "s_window.h"
#include <QPalette>
#include <QCursor>
s_window::s_window(QWidget *parent) : QWidget (parent)
{

    fb = NULL;
    zoomed = 0;
    count =0;
}

s_window::~s_window()
{}

 void s_window::mousePressEvent ( QMouseEvent * e )
 {
   if (e->button() ==Qt::LeftButton)
   {


    mp = this->mapFromGlobal(QCursor::pos());

    if (zoomed==0)
    {
        zoomed =1;
    }
    else if (zoomed ==1)
    {
        zoomed =0;
    }

    this->repaint();
    }


 }

void s_window::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

   QImage image(1100,800,QImage::Format_RGB32);
   image.fill(Qt::white);
   QPainter qp(&image);
   QPainter qp2(this);

   if (zoomed==1)
   {
    qp2.scale(2.25,2.25);
   }
   else
   {

       scale = 1;
   }



   if (zoomed ==1)
   {

       if (((mp.x()) < 367) && (mp.y() <267))
       {
           //top left
           qp2.translate(0,0);

       }
       else if (((mp.x()) >= 367 && mp.x() <733) && (mp.y() <267))
       {
           //top middle
           qp2.translate(-367,0);
       }
       else if (((mp.x()) >= 733) && (mp.y() <267))
       {
           //top right
           qp2.translate(-733,0);
       }
       else if (((mp.x()) < 367) && (mp.y() <533) && mp.y() >=267)
       {
           //middle left
           qp2.translate(0,-267);
       }
       else if (((mp.x()) >= 367) && (mp.x() <733) && (mp.y() <533) && mp.y() >=267)
       {
           //center
            qp2.translate(-367,-267);
       }
       else if (((mp.x()) >= 733) && (mp.y() <533) && mp.y() >=267)
       {
           //middle right
            qp2.translate(-733,-267);
       }
       else if (((mp.x()) < 367) && (mp.y() >=533))
       {
           //bottom left
            qp2.translate(0,-533);
       }
       else if (((mp.x()) >= 367) && (mp.x() <733) && (mp.y() >=533))
       {
           //center
            qp2.translate(-367,-533);
       }
       else if (((mp.x()) >= 733) && mp.y() >=533)
       {
           //center
            qp2.translate(-733,-533);
       }



   }
   else
   {
       qp2.translate(0,0);
   }


   qp.fillRect(0,0,1100,800,Qt::white);
   qp2.fillRect(0,0,1100,800,Qt::white);

    if (fb != NULL)
    {
        drawLines(&qp);
        drawLines(&qp2);
    }

    image.save("sched4.png",0,-1);

}

void s_window::drawLines(QPainter *qp)
{
  QPen pen(Qt::black, 2, Qt::SolidLine);

    qp->setPen(pen);
    qp->drawText(50,25,500,50,0,"Task 1 Red, Task 2 Orange, Task 3 Yellow, Task 4 Green, Task 5 Blue");
    qp->drawText(550,25,500,50,0,"Aperiodic Task 1 Gold,  Aperiodic Task 2 Grey, Aperiodic Task 3 Purple");

    qp->drawLine(50,50,50,150);
    qp->drawLine(50,190,50,290);
    qp->drawLine(50,330,50,430);
    qp->drawLine(50,470,50,570);
    qp->drawLine(50,610,50,710);

    //across the way
    qp->drawLine(50,120,1050,120);
    qp->drawLine(50,260,1050,260);
    qp->drawLine(50,400,1050,400);
    qp->drawLine(50,540,1050,540);
    qp->drawLine(50,680,1050,680);


    //right vertical lines
    qp->drawLine(1050,50,1050,150);
    qp->drawLine(1050,190,1050,290);
    qp->drawLine(1050,330,1050,430);
    qp->drawLine(1050,470,1050,570);
    qp->drawLine(1050,610,1050,710);

    int i,j,k;
    int offset =5;
    for (j=0; j<5; j++)
    for (i=0; i<39; i++)
    {

        if (((i+1)%20)==0)
        {
            pen.setWidth(5);
            qp->setPen(pen);

            offset +=25;
            qp->drawLine(75+25*i,120+offset+j*140,75+25*i,120+j*140-offset);
            offset -=25;
        }
        else if (((i+1)%10)==0)
        {
            pen.setWidth(4);
            qp->setPen(pen);
            offset +=15;
            qp->drawLine(75+25*i,120+offset+j*140,75+25*i,120+j*140-offset);
            offset -=15;
        }
        else if (((i+1)%2)==0)
        {
            pen.setWidth(3);
            qp->setPen(pen);
            offset +=7;
            qp->drawLine(75+25*i,120+offset+j*140,75+25*i,120+j*140-offset);
            offset -=7;
        }
        else
        {
            pen.setWidth(2);
            qp->setPen(pen);
            qp->drawLine(75+25*i,120+offset+j*140,75+25*i,120+j*140-offset);
        }
    }

    qp->setFont(QFont("Chicago",12));

    for (j=0; j<5; j++)
    for (i=0; i<=20;i++)
    {
        qp->drawText(45+i*50,175+j*140,QString::number(i+20*j)); //45,170
    }


    //now draw schedule
    for (i=0; i<fb->num_of_blocks; i++)
    {
        j =fb->block_arry[i].task;

        switch (j)
        {

            case 0:
                qp->setBrush(QBrush("#CD0000"));//red
                break;
            case 1:
                qp->setBrush(QBrush("#FFA500"));//orange
                break;
            case 2:
                qp->setBrush(QBrush("#FCD116"));//yellow
                break;

            case 3:
                qp->setBrush(QBrush("#49E20E")); //green
                break;
            case 4:
                qp->setBrush(QBrush("#0D4F8B"));//blue
                break;
            case 5:
                qp->setBrush(QBrush("#CFB53B"));//gold
                break;
            case 6:
                qp->setBrush(QBrush("#C6C3B5"));//grey
                break;
            case 7:
                qp->setBrush(QBrush("#5E2D79"));//purple ::  light green"limepulp" //D4ED91
                break;
            case 8:
            default:

                break;
         }
        if (j != 8) //8 is blank
        {

            if (i <40)
            k = 0;
            else if (i<80)
            k=1;
            else if (i<120)
            k=2;
            else if (i<160)
            k=3;
            else if (i<200)
            k=4;
            else
            k=5;


            switch (k)
            {
            default:
            case 0:
                qp->drawRect(50+i*25, 80, 25, 40);
                break;
            case 1:
                qp->drawRect(50+i*25-40*25, 80+140, 25, 40);
                break;
            case 2:
                qp->drawRect(50+i*25-80*25, 80+140*2, 25, 40);
                break;
            case 3:
                qp->drawRect(50+i*25-120*25, 80+140*3, 25, 40);
                break;
            case 4:
                qp->drawRect(50+i*25-160*25, 80+140*4, 25, 40);
                break;
            case 5:
                break;

            }
        }
    }


}

bool s_window::getBlocks(full_Block *fbptr)
{
    fb = fbptr;

    return 0;
}
