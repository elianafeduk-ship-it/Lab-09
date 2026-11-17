#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 09.2/Lab 09.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest092
{
    TEST_CLASS(UnitTest092)
    {
    public:

        TEST_METHOD(TestCalculate)
        {
            double w1 = Calculate(2, 2, 6);
            double w2 = Calculate(2, 2, 5);

            Assert::AreEqual(256.0, w1);
            Assert::AreEqual(-8.0, w2);
        }
    };
}
