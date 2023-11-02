#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1/Source.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab61ut
{
	TEST_CLASS(lab61ut)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int n = 20;
            int t[n];

            create(t, n);

        }

        TEST_METHOD(TestReplaceWithZeros)
        {
            const int size = 5;
            int t[size] = { 3, 2, 7, -5, 8 };
            create (t, size);
            Assert::AreEqual(-7, t[0]);
        }
	};
}
