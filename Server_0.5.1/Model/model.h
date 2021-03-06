#include <QList>
#include <QString>
#include <QMap>
#include "behavior.h"
#include "attribute.h"
#ifndef MODEL_H
#define MODEL_H

class Model
{
private:
    QString Name;
    int id;
    int number;
    QString Desc;
    QString Color;
    QList <behavior> Behavior;
    QList <Attribute> attribute;
public:
    Model();
    Model(QString);
    bool getModelFromFile(QString);
    QString getName(){return Name;}
    QString getDesc(){return Desc;}
    QString getColor(){return Color;}
    int getNumber(){return number;}
    void setName(QString n){Name = n;}
    void setDesc(QString n){Desc = n;}
    void setColor(QString n){Color = n;}
    void setID(int n){id = n;}
    int getID(){return id;}
    QList <behavior> getBehaviors(){return Behavior;}
    QList <Attribute> getAttributes(){return attribute;}
    void printBehavior();
    void printAttribute();
    Attribute getAttribute(int i){if(i<attribute.count()) return attribute[i];}
    behavior getBehavior(int i){if(i<Behavior.count()) return Behavior[i];}
    int countAttribute(){return attribute.count();}
    int countBehavior(){return Behavior.count();}
};

#endif // MODEL_H
