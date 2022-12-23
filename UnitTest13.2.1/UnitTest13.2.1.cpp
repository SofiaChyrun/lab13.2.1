#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofia13.2.1/ChyrunSofia13.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t, z = 9;
			double x = 7, y = 8;
			t = minmax(x, y, z);
			Assert::AreEqual(t, 2);
		}
	};
}
