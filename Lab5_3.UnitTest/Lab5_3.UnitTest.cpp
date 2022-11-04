#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_3/Lab5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab53UnitTest
{
	TEST_CLASS(Lab53UnitTest)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double t;
			double x = 2;
			int n = 0;
			double a = 1;
			t = floor(A(x, n, a));
			Assert::AreEqual(t, floor(1));
		}
	};
}
