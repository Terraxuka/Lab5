#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_5/Lab5_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab55UnitTest
{
	TEST_CLASS(Lab55UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			double e;
			K = 1;
			t = S0(K, 15);
			e = S0(K, 15);
			Assert::AreEqual(t, e);
		}
	};
}
