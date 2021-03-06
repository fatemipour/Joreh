#ifndef __WORLDMODEL_H
#define __WORLDMODEL_H

#include "Object.h"
#include "Field.h"
#include <map>

class WorldModel
{
public:
  WorldModel();

  const Object &getObject( unsigned id );
  Object &setObject( unsigned id );

  const Object &getObjectByIndex( unsigned indx );
  unsigned getNumOfObjects() const;

  void createObject( unsigned id );
  void addObject( Object obj );

  int getCurCycle() const;
  void setCurCycle( int curCycle );

  const Field &getField() const;
  Field &setField();

  int getMonitorID() const;
  void setMonitorID( int id );

  void gameFinished();
  bool isGameFinished() const;

private:
  std::map<unsigned, Object> m_objects;
  std::vector<unsigned> m_objectsIndx;
  Field m_field;

  int m_curCycle;
  int m_monitorID;

  bool m_bFinished;
};

#endif
