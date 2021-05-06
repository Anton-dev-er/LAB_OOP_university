using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_Sharp_oop_pr_2_3_4_2021_part2_LB_2._2
{
    class NumbersString : IChangingSymbol
    {
        private string str;
        public NumbersString() { }
        public NumbersString(string str)
        {
            this.str = str;
        }
        public void ChangeSymbol()
        {
            while(true)
                try
                {
                Console.WriteLine("Введіть число яке хочете замінити");
                char n1 = char.Parse(Console.ReadLine());

                Console.WriteLine("Введіть число на яке хочете замінити");
                char n2 = char.Parse(Console.ReadLine());
                Console.WriteLine();
                if ((char.IsNumber(n1) && char.IsNumber(n2)) == false)
                    continue;
                Console.WriteLine(str.Replace(n1, n2) + "\n\n");
                break;
                }
                catch
                {
                    Console.WriteLine("\nПотрібно ввести одне число\n");
                    continue;
                }
        }
    }
}
