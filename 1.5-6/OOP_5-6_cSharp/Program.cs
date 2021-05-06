using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
	class Program
	{
        static void Main(string[] args)
        {
            Console.WriteLine("Введи перший рядок");
            string str1 = Console.ReadLine();


            Console.WriteLine("Введи другу рядок");
            string str2 = Console.ReadLine();

            String str_1 = new String();
            str_1.set_string(str1);


            String str_2 = new String();
            str_2.set_string(str2);

            Console.WriteLine("\nДодавання значеня в кінець рядка(String * char)");
            string str3 = Console.ReadLine();
            String str_3 = str_1 + str3;
            str_3.show();
            
            Console.WriteLine("\nДодавання значеня в початок рядка(char * String)");
            string str4 = Console.ReadLine();
            String str_4 = str4 + str_1;
            str_4.show();

            Console.WriteLine("\nКонкатенація рядків");
            String str_5 = str_1 + str_2;
            str_5.show();

            Console.WriteLine("\nДекрементація рядка (видалити перший символ)");
            String str_6 = --str_1;
            str_6.show();

            Console.WriteLine("\nПеревірка чи однакові рядки");
            bool str_7 = str_1 == str_2;

            Console.WriteLine("\nПеревірка чи рядок не порожній");
            bool str_8 = str_1 == "";


            string stop = Console.ReadLine();

        }

    }
}
