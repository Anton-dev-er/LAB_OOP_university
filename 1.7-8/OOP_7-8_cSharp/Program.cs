using System;

namespace OOP_7_8_cSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            MyClass myArr = new MyClass();

            myArr.fillArr2(5, 10);
            myArr.showArr2();

            Console.WriteLine("Введіть рядок:");
            int a = int.Parse(Console.ReadLine());
            int sum = myArr[a - 1];
            Console.WriteLine($"\nСума = {sum}");

            Console.WriteLine("\nСередньоквадратичне значення всіх елементів масиву: ");
            myArr.rmsValueArr3();
            myArr.showArr3();
        }
    }
}
