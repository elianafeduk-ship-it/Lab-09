
#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

#include "../Lab 09.1/Lab 09.1.cpp"


#include "../Lab 09.1/var.cpp"
#include "../Lab 09.1/dod.cpp"
#include "../Lab 09.1/sum.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest091
{
    TEST_CLASS(UnitTest091)
    {
    public:

        TEST_METHOD(TestSum)
        {
            nsVar::x = 0.5;
            nsVar::e = 0.0001;

            nsSum::sum();

            Assert::IsTrue(
                fabs(nsVar::s - atan(nsVar::x)) < 0.0001
            );
        }
    };
}

