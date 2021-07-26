#ifndef WRITEABLE_H
#define WRITEABLE_H

#include "Writer.h"

struct Writeable
{
  Writeable() = default;
  virtual void Write(Writer& reader);
  virtual ~Writeable() = 0;
}

#endif
