#ifndef READER_H
#define READER_H

#include <string>

struct Reader
{
  Reader() = default;
  virtual char Char() = 0;
  virtual unsigned char UChar() = 0;
  virtual short Short() = 0;
  virtual unsigned short UShort() = 0;
  virtual int Int() = 0;
  virtual unsigned UInt() = 0;
  virtual float Float() = 0;
  virtual double Double() = 0;
  virtual std::string Token() = 0;
  virtual const char* Buffer() = 0;
  virtual ~Reader() = 0;
};

#endif
