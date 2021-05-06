using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Text;

namespace c_Sharp_PracticeUnit2_LB_2._2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введіть рядок:");
            string str = Console.ReadLine();
            string let = "";
            string num = "";
            foreach (var item in str)
            {
                if (Char.IsNumber(item))
                    num += item;
                if (Char.IsLetter(item))
                    let += item;
            }
            Console.WriteLine();

            String l = new Letters(let);
            l.lenString();

            String n = new Number(num);
            n.lenString();


            string pause = Console.ReadLine();

        }
    }
}
