#include "node.h"

/***********************************************************************
  Задача 3. Да се дефинира шаблон на булева функция dupsub, която
  приема два параметъра: указател към линеен едносвързан списък и
  неотрицателно число k. Функцията да връща истина, ако в списъка има
  поне два различни подсписъка с дължина k, които са са еднакви
  елементи. Примери за такива списъци са 1, 2, 3, 4, 1, 2, 5 и 1, 2,
  3, 3, 3, 4 за k = 2.
************************************************************************/

/***********************************************************************
 РЕШЕНИЕ:
************************************************************************/

template <typename T>
bool dupsub(node<T>* l, unsigned k);

/***********************************************************************
 КРАЙ НА РЕШЕНИЕТО
************************************************************************/

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

/***********************************************************************
  РАЗКОМЕНТИРАЙТЕ СЛЕДВАЩИЯ РЕД, ЗА ДА ВКЛЮЧИТЕ ТЕСТОВЕТЕ
************************************************************************/
//#include "prob3_tests.h"

int main ()
{
    // пускане на тестовете
    doctest::Context().run();
    return 0;
}
