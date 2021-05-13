using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_Sharp
{
    class ArithmeticExpressions
    {
        private int a, b, c, d;
        public ArithmeticExpressions(int a, int b, int c, int d)
        {
            this.a = a;
            this.b = b;
            this.c = c; 
            this.d = d; 
        }

        public double CalculationExpressions()
        {
            double res = (1 + a - b / 2) / (Math.Sqrt(24 + d - c) + (a / b));
            if ((24 + d - c) < 0)
                throw new ArithmeticException();
            return res;
        }

    }
}
