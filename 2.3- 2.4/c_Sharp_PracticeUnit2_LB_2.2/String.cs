using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_Sharp_PracticeUnit2_LB_2._2
{
    class String
    {
        protected string str;
        public String(string str)
        {
            this.str = str;
        }
        public virtual void lenString()
        {
            Console.WriteLine("Довжина рядка:" + str.Length);
        }
    }
    class Letters : String
    {
        public Letters(string str) : base(str)
        {
            this.str = str;
        }
        public override void lenString()
        {
            Console.WriteLine("Рядок літер:" + str);
            base.lenString();
            Console.WriteLine("Перевернутий рядок:" + new string(str.Reverse().ToArray()));
        }
    }
    class Number : String
    {
        public Number(string str) : base(str)
        {
            this.str = str;
        }
        public override void lenString()
        {
            Console.WriteLine("Рядок цифр:" + str);
            base.lenString();
            Console.WriteLine("Подвоєння рядка:" + str + str);
        }
    }

}
