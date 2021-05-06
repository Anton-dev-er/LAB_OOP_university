using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
	public class String
    {
     
        private string str;

        public static String operator +(String value1, String value2)
        {
            return new String { str = value1.str + value2.str };
        }
        public static String operator +(String value1, string value2)
        {
            return new String { str = value1.str + value2 };
        }
        public static String operator +(string value1, String value2)
        {
            return new String { str = value1 + value2.str };
        }
        public static String operator --(String value)
        {
            string value1 = value.str;
            value1 = value1.Substring(1);
            return new String { str = value1 };
        }
        public static bool operator ==(String value1, String value2)
        {
            if (value1.str == value2.str)
            {
                Console.WriteLine("Строкі однакові!!!");
                return true;
                
            }    
            else
            {
                Console.WriteLine("Строкі не однакові!!!");
                return false;
            }
        }
        public static bool operator !=(String value1, String value2)
        {
            if (value1.str != value2.str)
            {
                Console.WriteLine("Строкі не однакові!!!");
                return false;

            }
            else
            {
                Console.WriteLine("Строкі однакові!!!");
                return true;
            }
        }
        public static bool operator ==(String value1, string value2)
        {
            if (value1.str == value2)
            {
                Console.WriteLine("Строкі порожня!!!");
                return true;

            }
            else
            {
                Console.WriteLine("Строкі не порожня!!!");
                return false;
            }
        }
        public static bool operator !=(String value1, string value2)
        {
            if (value1.str != value2)
            {
                Console.WriteLine("Строкі порожня!!!");
                return true;

            }
            else
            {
                Console.WriteLine("Строкі не порожня!!!");
                return false;
            }
        }
        public void show()
        {
            Console.WriteLine(this.str);
        }

        public void set_string(string str)
        {
            this.str = str;
        }
    }
}
