using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_Sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Тест №1");
            Rhombus<int> p1 = new Rhombus<int>(123, 8, 433, 12, 72, 8, 224, 4);


            Console.WriteLine("\nТест №2");
            Rhombus<double> p2 = new Rhombus<double>();
            Console.WriteLine(p2.Perimeter());
            Console.WriteLine(p2.Square());

            Console.WriteLine("\nТест №3");
            Console.WriteLine("Before");
            Rhombus<int> p3 = new Rhombus<int>(1, 8, 4, 12, 7, 8, 4, 4);
            Console.WriteLine(p3.Perimeter());
            Console.WriteLine(p3.Square());
      
            Console.WriteLine("\nAfter");
            p3.ChangeRhombus(1, 8, 13, 8, 8);
            Console.WriteLine(p3.Perimeter());
            Console.WriteLine(p3.Square());

            Console.WriteLine("\nТест №4");
            p3.ChangeRhombus(123, 1, 23, 12, 132);




            Console.ReadLine();
        }
    }
}
