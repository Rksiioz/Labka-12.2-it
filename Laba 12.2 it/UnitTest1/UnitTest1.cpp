#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 12.2 it/Laba 12.2 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Elem* first = NULL;
            Elem* last = NULL;
            Input(first, last, 1);
            Input(first, last, 2);
            Input(first, last, 3);
            Input(first, last, 4);
            Input(first, last, 5);

            int result = CountOddElements(first);

            Assert::AreEqual(3, result);
		}
	};
}
