#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_4/Lab5_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab54UnitTest
{
	TEST_CLASS(Lab54UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			tp = 2;
			tk = 3;
			n = 4;
			t = dt;
			Assert::AreEqual(t, dt);
		}
	};
}
