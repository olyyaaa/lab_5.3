#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestzFunction)
		{
			const double x = 2;
			double S = 0;
			double j = 2;
			double k = 4;
			double& res = temp;
			double expected = 2338;
			z(j, k, res);

			Assert::AreEqual(res, expected);


		}
		
		}
	};
