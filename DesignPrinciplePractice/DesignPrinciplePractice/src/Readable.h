#ifndef READABLE_H
#define READABLE_H

#include "Reader.h"

struct Readable
{
  Readable() = default;
  virtual void Read(Reader& reader);
  virtual ~Readable() = 0;
}

#endif
