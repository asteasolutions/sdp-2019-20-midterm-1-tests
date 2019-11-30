#include "node.h"

/***********************************************************************
  Задача 6. Да се дефинира шаблон на функция removesub, която приема
  два параметъра first и second — указатели към линейни едносвързани
  списъци. Функцията да изтрива от списъка с начало first
  последователно всички срещания на подсписъци, които съвпадат със
  списъка с начало second. Например, при списък first с елементи 1, 2,
  3, 3, 3, 4, 5, 3, 3, 6 и second с елементи 3, 3, first да се
  преобразува до списъка 1, 2, 3, 4, 5, 6.
************************************************************************/

/***********************************************************************
 РЕШЕНИЕ:
************************************************************************/

template <typename T>
bool issublist (node<T>* sub, node<T>* list)
{
  while (sub != nullptr && list != nullptr && sub->data == list->data)
  {
    sub = sub->next;
    list = list->next;
  }

  return sub == nullptr;
}

template <typename T>
bool deleteprefix (node<T>* sub, node<T>*& list)
//sub MUST be a prefix of list
{
  node<T> *save;
  while (sub != nullptr)
  {
    sub = sub->next;
    save = list->next;
    delete list;
    list = save;
  }

  return sub == nullptr;

}

template <typename T>
void removesub(node<T>*& first, node<T>* second)
{
  
  if (first == nullptr || second == nullptr)
  {
    return;
  }
  
  node<T> *crr = first;

  if (issublist (second,first))
  {
    deleteprefix (second,first);
  }
  
  while (crr->next != nullptr)
  {
    if (issublist (second,crr->next))
    {
      deleteprefix (second,crr->next);
    } else {
      crr = crr->next;
    }
  }
}

/***********************************************************************
 КРАЙ НА РЕШЕНИЕТО
************************************************************************/

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

/***********************************************************************
  РАЗКОМЕНТРИАЙТЕ СЛЕДВАЩИЯ РЕД, ЗА ДА ВКЛЮЧИТЕ ТЕСТОВЕТЕ
************************************************************************/
#include "prob6_tests.h"

int main ()
{
    // пускане на тестовете
    doctest::Context().run();
    return 0;
}
