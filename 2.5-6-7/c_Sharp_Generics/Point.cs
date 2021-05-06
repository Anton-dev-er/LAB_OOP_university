using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace c_Sharp
{
    class Point<T>
    {
        public T xA, yA, xB, yB, xC, yC, xD, yD;
        public Point()
        {
            xA = (T)(dynamic)1;
            yA = (T)(dynamic)2;
            xB = (T)(dynamic)2;
            yB = (T)(dynamic)3;
            xC = (T)(dynamic)3;
            yC = (T)(dynamic)2;
            xD = (T)(dynamic)2;
            yD = (T)(dynamic)1;
        }
        public Point(T xA, T yA, T xB, T yB,
                     T xC, T yC, T xD, T yD)
        {
            this.xA = xA;
            this.yA = yA;
            this.xB = xB;
            this.yB = yB;
            this.xC = xC;
            this.yC = yC;
            this.xD = xD;
            this.yD = yD;
        }
        public static double SetSide(T x1, T y1, T x2, T y2)
        {
            return Math.Sqrt(Math.Pow((dynamic)x2 - (dynamic)x1, 2) + Math.Pow((dynamic)y2 - (dynamic)y1, 2));
        }
    }

    class Rhombus<T>
    {
        private double AC, BD, Side;
        private Point<T> p;
        public Rhombus()
        {
            SetParametr(new Point<T>());
        }
        public Rhombus(T xA, T yA, T xB, T yB, T xC, T yC, T xD, T yD)
        {
            p = new Point<T>(xA, yA, xB, yB, xC, yC, xD, yD);
            CheckForRhombus(p);
        }
        public void ChangeRhombus(T x1, T y1, T x2, T y2, double otherdiagonal)
        {
            if (Convert.ToDouble(p.yA) == Convert.ToDouble(y1) && Convert.ToDouble(p.yC) == Convert.ToDouble(y2))
            {
                p.yB = (T)(dynamic)x1;
                p.yD = (T)(dynamic)x2;
                AC = otherdiagonal;
                BD = Point<T>.SetSide(p.xB, p.yB, p.xD, p.yD);
                Side = Math.Sqrt(Math.Pow(AC / 2, 2) + Math.Pow(BD / 2, 2));
            }
            else if (Convert.ToDouble(p.xB) == Convert.ToDouble(x1) && Convert.ToDouble(p.xD) == Convert.ToDouble(x2))
            {
                p.yB = (T)(dynamic)y1;
                p.yD = (T)(dynamic)y2;
                BD = otherdiagonal;
                AC = Point<T>.SetSide(p.xA, p.yA, p.xC, p.yC);
                Side = Math.Sqrt(Math.Pow(AC / 2, 2) + Math.Pow(BD / 2, 2));
            }
            else Console.WriteLine("Неправині координати");
        }
        public double Square() => (AC * BD) / 2;
        public double Perimeter() => Side * 4;
        private void SetParametr(Point<T> p)
        {
            AC = Point<T>.SetSide(p.xA, p.yA, p.xC, p.yC);
            BD = Point<T>.SetSide(p.xB, p.yB, p.xD, p.yD);
            Side = Math.Sqrt(Math.Pow(AC / 2, 2) + Math.Pow(BD / 2, 2));
        }
        private bool CheckForRhombus(Point<T> p)
        {
            double AB = Point<T>.SetSide(p.xA, p.yA, p.xB, p.yB);
            double BC = Point<T>.SetSide(p.xB, p.yB, p.xC, p.yC);
            double CD = Point<T>.SetSide(p.xC, p.yC, p.xD, p.yD);
            double DA = Point<T>.SetSide(p.xD, p.yD, p.xA, p.yA);
            if ((AB == BC && CD == DA && AB == CD) == false)
            {
                Console.WriteLine("Введені неправильні координати, буде визваний конструктор без параметрів");
                SetParametr(new Point<T>());
                return false;
            }
            else
            {
                SetParametr(p);
                return true;
            }
        }
    }

}



/*if (Convert.ToDouble(p.yA) == Convert.ToDouble(y1) && Convert.ToDouble(p.yC) == Convert.ToDouble(y2))
{
    p.yB = (T)(dynamic)x1;
    p.yD = (T)(dynamic)x2;
    AC = otherdiagonal;
    BD = Point<T>.SetSide(p.xB, p.yB, p.xD, p.yD);
    Side = Math.Sqrt(Math.Pow(AC / 2, 2) + Math.Pow(BD / 2, 2));
}
else if (Convert.ToDouble(p.xB) == Convert.ToDouble(x1) && Convert.ToDouble(p.xD) == Convert.ToDouble(x2))
{
    p.yB = (T)(dynamic)y1;
    p.yD = (T)(dynamic)y2;
    BD = otherdiagonal;
    AC = Point<T>.SetSide(p.xA, p.yA, p.xC, p.yC);
    Side = Math.Sqrt(Math.Pow(AC / 2, 2) + Math.Pow(BD / 2, 2));
}
else
    Console.WriteLine("Неправині координати");
*/