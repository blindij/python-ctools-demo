// file: PhoneticAlgorithms.h
#ifndef PHONETICALGORITHMS_H
#define PHONETICALGORITHMS_H

class PhoneticAlgorithm{
 public:
  virtual ~PhoneticAlgorithm(){ }
  virtual std::string encode(const std::string& word) const = 0;  // pure virtual function
};

#endif //PHONETICALGORITHMS_H
