using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_Sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            ArithmeticExpressions[] arr =
            {
                new ArithmeticExpressions(0,0,0,0),
                new ArithmeticExpressions(1,12,242,0),
                new ArithmeticExpressions(2,0,0,324),
                new ArithmeticExpressions(3,123,24,23),
                new ArithmeticExpressions(4,76,0,123),
                new ArithmeticExpressions(5,7,42,100),
                new ArithmeticExpressions(67,23,0,0)
            };
            foreach (var item in arr)
            {
                try
                {
                    Console.WriteLine("Результат:" + item.CalculationExpressions());
                }
                catch (DivideByZeroException)
                {

                    Console.WriteLine("Не можна ділить на ноль");
                }
                catch (ArithmeticException)
                {

                    Console.WriteLine("Корінь повинен бути більше 0");
                }
            }
            Console.ReadLine();
        }
    }
}
