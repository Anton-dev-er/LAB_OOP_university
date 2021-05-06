using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_Sharp_oop_pr_2_3_4_2021_part2_LB_2._2
{
    class Program
    {

        static void Main(string[] args)
        {
            IChangingSymbol Icg = new NonAlphabetSymbolsString("1234554321qwe_+=");
            Icg.ChangeSymbol();

            Icg = new NumbersString("1234554321qwe_+=");
            Icg.ChangeSymbol();

            
            string pause = Console.ReadLine();
        }
    }
}
