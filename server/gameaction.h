#ifndef GAMEACTION_H
#define GAMEACTION_H

#include <QObject>
#include <QTcpSocket>
#include "user.h"


class gameAction : public QObject
{
    Q_OBJECT
public:

    QString str;
    bool lock;
    user* user1;
    user* user2;
    gameAction(user* tmp1, user* tmp2, QObject *parent = nullptr);

    void instruction(bool temp);

    void gameOver();

    void send07(bool tmp);
    void send08(bool tmp);
    void send09(bool tmp, int num);
    void send10(bool tmp, int num);
    void send11(bool tmp);
    void send12(bool tmp ,QString str);
    void move(bool tmp);


signals:

    void sendSignal(QTcpSocket *,QString);

};

#endif // GAMEACTION_H
