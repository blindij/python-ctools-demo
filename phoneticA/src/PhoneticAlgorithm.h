// file: PhoneticAlgorithm.h
#ifndef PHONETICALGORITHM_H
#define PHONETICALGORITHM_H

class PhoneticAlgorithm{
 public:
  virtual ~PhoneticAlgorithm(){ }
  virtual std::string encode(const std::string& word) const = 0;  // pure virtual function
};

#endif //PHONETICALGORITHM_H
