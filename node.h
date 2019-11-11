template <typename T>
struct node {
  T data;
  node* next;

  node(T const& _data = T(), node* _next = nullptr) : data(_data), next(_next) {}
};
