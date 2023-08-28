#ifndef ISTACK_HPP
#define ISTACK_HPP 
typedef int element_t;
class IStack {
 public:
  virtual bool empty() = 0;
  virtual int size() = 0;
  virtual element_t top() = 0;
  virtual void push(element_t) = 0;
  virtual element_t pop() = 0;
  virtual element_t* data() = 0;
};
#endif