/**
 * @file controller.h
 *
 * @copyright 2017 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_SRC_ARENA_VIEWER_H_
#define PROJECT_SRC_ARENA_VIEWER_H_

#include "src/arena.h"

NAMESPACE_BEGIN(csci3081);

class ArenaViewer {
 public:
  virtual ~ArenaViewer() {}
  virtual bool RunViewer() = 0;
  virtual void SetArena(Arena* arena) = 0;
};

NAMESPACE_END(csci3081);

#endif  // PROJECT_SRC_ARENA_VIEWER_H_
