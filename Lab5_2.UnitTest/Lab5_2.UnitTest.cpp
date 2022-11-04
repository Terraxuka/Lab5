#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_2/Lab5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab52UnitTest
{
	TEST_CLASS(Lab52UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double r = 1;
			double s = 2;
			double f = (pow(g(r, s * s + 1), 2) + g(1, r * r + s));
			Assert::AreEqual(double(floor(f)), 38.);
		}
	};
}
