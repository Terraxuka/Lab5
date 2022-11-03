#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_1/Lab5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab51UnitTest
{
	TEST_CLASS(Lab51UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
