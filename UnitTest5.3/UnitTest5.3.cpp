#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
  TEST_CLASS(UnitTest53)
  {
  public:
    
    TEST_METHOD(TestJFunction)
    {
      double a = 3;
      double expected = -0.42976727906624879;

      double res = j(a);

      Assert::AreEqual(res, expected);
    }
  };
}
