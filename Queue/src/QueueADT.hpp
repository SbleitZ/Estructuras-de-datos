typedef int element_t;
class StackADT {
 public:
  virtual bool empty() = 0;
  virtual int size() = 0;
  virtual element_t top() = 0;
  virtual void push(element_t) = 0;
  virtual void pop() = 0;
};