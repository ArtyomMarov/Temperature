#include <QString>
#include <QtTest>
#include "myclass.h"

class MyFirstUnitTest : public QObject
{
    Q_OBJECT

public:
    MyFirstUnitTest();   

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testFahrenheitToCelsius();
    void testCase1();
    void tableTestFahrenheitToCelsius_data();
    void tableTestFahrenheitToCelsius();
};

MyFirstUnitTest::MyFirstUnitTest()
{
}

void MyFirstUnitTest::initTestCase()
{
}

void MyFirstUnitTest::cleanupTestCase()
{
}

void MyFirstUnitTest::testFahrenheitToCelsius()
{
    MyClass myClass;
    QCOMPARE(myClass.fahrenheitToCelsius(32.0), 0.0);
    QCOMPARE(myClass.fahrenheitToCelsius(0.0), -20);
    QCOMPARE(myClass.fahrenheitToCelsius(100.0), 37.8);
    QCOMPARE(myClass.fahrenheitToCelsius(50.0), 10.0);
}

void MyFirstUnitTest::testCase1()
{
    QVERIFY2(2>3, "Failure");
}

void MyFirstUnitTest::tableTestFahrenheitToCelsius_data()
{
    QTest::addColumn<double>("source");
    QTest::addColumn<double>("expected");

    QTest::newRow("Test data 1") << 0.0 << -17.8;
    QTest::newRow("Test data 2") << 10.0 << -12.2;
    QTest::newRow("Test data 3") << 20.0 << -6.8;
    QTest::newRow("Test data 4") << 32.0 << 0.0;
    QTest::newRow("Test data 5") << 40.0 << 4.4;
    QTest::newRow("Test data 6") << 50.0 << 10.0;
    QTest::newRow("Test data 7") << 60.0 << 15.5;
}

void MyFirstUnitTest::tableTestFahrenheitToCelsius()
{
    MyClass myClass;
    QFETCH(double, source);
    QFETCH(double, expected);
    QCOMPARE(myClass.fahrenheitToCelsius(source),expected);
}


QTEST_APPLESS_MAIN(MyFirstUnitTest)

#include "tst_myfirstunittest.moc"
