using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_Sharp_oop_pr_2_3_4_2021_part2_LB_2._2
{
    class NonAlphabetSymbolsString : IChangingSymbol
    {
        private string str;
        public NonAlphabetSymbolsString() { }
        public NonAlphabetSymbolsString(string str)
        {
            this.str = str;
        }
        public void ChangeSymbol()
        {
            while (true)
                try
                {
                    Console.WriteLine("Введіть не алфавітний символ який хочете замінити");
                    char n1 = char.Parse(Console.ReadLine());

                    Console.WriteLine("Введіть не алфавітний символ на який хочете замінити");
                    char n2 = char.Parse(Console.ReadLine());
                    Console.WriteLine();
                    if ((char.IsLetter(n1) || char.IsLetter(n2)))
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
