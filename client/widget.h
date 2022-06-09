#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>

#include "network.h"
#include "statusandmenubar.h"
#include "login.h"
#include "board.h"
#include "chat.h"

class widget : public QWidget
{
    Q_OBJECT
public:
    explicit widget(QWidget *parent = nullptr);
    void myConnect();
    void successfulLogin();
    void startWindow();
    void userLogin(); /*** 当用户登录时 ***/
    void respond02(int myid);
    void respond03(int myid);
    void respond06(QString str);
    void send07(int id, int x, int y);
    void respond11();
    void gameOver();

signals:


public:
    int id;
    int rivalId;
    statusAndMenuBar* stme;
    network* tcp;
    login * lgn;
    board * boardChess;
    chat * ct;
};

#endif // WIDGET_H
