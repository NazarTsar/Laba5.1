#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.1/1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p;
			p = g(6, 7);
			Assert::AreEqual(p, 0.0236598, 0.0000001);
		}
	};
}
