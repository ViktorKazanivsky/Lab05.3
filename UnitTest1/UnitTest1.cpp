#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.4/Lab_05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = P4 (1, 2, 2.2);
			Assert::AreEqual(z, 0.44, 0.00000001);
		}
	};
}
