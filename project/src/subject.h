/**
 * @file subject.h
 *
 * @copyright 2019 Kadin Schermers
 */
#ifndef PROJECT_SRC_SUBJECT_H_
#define PROJECT_SRC_SUBJECT_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/observer.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);



class Subject {
 public:
  virtual ~Subject() {}

  virtual void SubscribeTo(Observer* o) = 0;

  virtual void UnsubscribeTo() = 0;

  virtual void NotifyObserver() = 0;
};

NAMESPACE_END(csci3081);

#endif  // PROJECT_SRC_SUBJECT_H_
