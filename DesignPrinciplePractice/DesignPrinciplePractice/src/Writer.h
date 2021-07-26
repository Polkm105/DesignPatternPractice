#ifndef READER_H
#define READER_H

#include <string>

struct Writer
{
  Writer() = default;
  virtual void Char(char val) = 0;
  virtual void UChar(unsigned char val) = 0;
  virtual void Short(short val) = 0;
  virtual void UShort(unsigned short val) = 0;
  virtual void Int(int val) = 0;
  virtual void UInt(unsigned val) = 0;
  virtual void Float(float val) = 0;
  virtual void Double(double val) = 0;
  virtual void Token(const std::string& val) = 0;
  virtual const char* Buffer() = 0;
  virtual ~Writer() = 0;
};

#endif
