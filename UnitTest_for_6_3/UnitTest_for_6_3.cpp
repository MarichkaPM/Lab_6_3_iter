#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 6_3iter/Lab 6_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor63
{
	TEST_CLASS(UnitTestfor63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 0;
			int a[5] = { -1, 2, 0, 4, 8 };
			t = find_maximum(a, 5);
			Assert::AreEqual(t, 8);
		}
	};
}
