#include "node.h"


/***********************************************************************
  Задача 5. Да се дефинира функция removeIdx, която приема като
  единствен параметър указател към линеен едносвързан списък от цели
  числа. Функцията да премахва от списъка всички елементи, които са
  равни на разликата между индекса на последния елемент и индекса на
  самия елемент.
************************************************************************/

/***********************************************************************
 РЕШЕНИЕ:
************************************************************************/

void removeIdx(node<int> *&l)
{

  if (l == nullptr)
    return;

  int length = 0;
  node<int> *crr = l;
  while (crr != nullptr)
  {
    ++length;
    crr = crr->next;
  }
  node<int> *save;
  int i;
  for (crr = l, i = length-2; i >= 0; --i)
  {
      if (crr->next->data == i)
      {
        save = crr->next->next;
        delete crr->next;
        crr->next = save;
      } else {
        crr = crr->next;
      }
  }

  if (l->data == length-1)
  {
    save = l->next;
    delete l;
    l = save;
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
#include "prob5_tests.h"

int main ()
{
    // пускане на тестовете
    doctest::Context().run();
    return 0;
}
