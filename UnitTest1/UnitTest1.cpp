#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-11.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Створення тимчасового файлу для тесту
			ofstream fout("testfile.txt");
			fout << "This is a BASIC test file.\n";
			fout << "Contains several instances of BASIC.\n";
			fout.close();

			// Очікуваний результат: "BASIC" має 10 символів.
			int a = 11;
			int kilkist = Count((char*)"testfile.txt");

			Assert::AreEqual(a, kilkist);
		}
	};
}
