#include "node.h"

/***********************************************************************
  Задача 4. Да се дефинира шаблон на функция mirror, която приема като
  единствен параметър указател към линеен едносвързан списък. Към края
  на списъка да се долепят оригиналните му елементи в обратен
  ред. Например, списъкът с елементи 1, 2, 3 да се преобразува до
  списъка 1, 2, 3, 3, 2, 1.
************************************************************************/

/***********************************************************************
 РЕШЕНИЕ:
************************************************************************/

template <typename T>
void mirror(node<T>* l);

/***********************************************************************
 КРАЙ НА РЕШЕНИЕТО
************************************************************************/

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

/***********************************************************************
  РАЗКОМЕНТИРАЙТЕ СЛЕДВАЩИЯ РЕД, ЗА ДА ВКЛЮЧИТЕ ТЕСТОВЕТЕ
************************************************************************/
//#include "prob4_tests.h"

int main ()
{
    // пускане на тестовете
    doctest::Context().run();
    return 0;
}
