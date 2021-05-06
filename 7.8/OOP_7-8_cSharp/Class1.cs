using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace OOP_7_8_cSharp
{
    public class MyClass
    {
        private int[,] arr3;
        private int[,] arr2;
        private int[] arr1;
        private int x, y;
        public void fillArr2(int x1, int y1)
        {
            this.x = x1;
            this.y = y1;
            Random rnd = new Random();
            arr2 = new int[x, y];

            for (int i = 0; i < x; i++)
                for (int j = 0; j < y; j++)
                    arr2[i, j] = rnd.Next(10);
        }
        public void showArr2()
        {
            for (int i = 0; i < arr2.GetLength(0); i++)
            {
                for (int j = 0; j < arr2.GetLength(1); j++)
                {
                    Console.Write(arr2[i, j] + "\t");
                }
                Console.WriteLine();
            }
        }
        public int this[int i, int j]
        {
            set { arr2[i, j] = value; }
            get { return arr2[i, j]; }
        }
        public void rmsValueArr3()
        {
            arr3 = new int[x, y];
            for (int i = 0; i < arr2.GetLength(0); i++)
                for (int j = 0; j < arr2.GetLength(1); j++)
                    arr3[i, j] = arr2[i, j] * arr2[i, j];
        }
        public void showArr3()
        {
            for (int i = 0; i < arr3.GetLength(0); i++)
            {
                for (int j = 0; j < arr3.GetLength(1); j++)
                {
                    Console.Write(arr3[i, j] + "\t");
                }
                Console.WriteLine();
            }
            int sum = 0;
            for (int i1 = 0; i1 < arr3.GetLength(0); i1++)
            {
                for (int j1 = 0; j1 < arr3.GetLength(1); j1++)
                {
                    sum += arr3[i1, j1];
                }
            }
            Console.WriteLine($"\n\nСума:{sum} \t ");
            Console.WriteLine($"Середньоквадратичне значення всіх елементів масиву: {sum / arr3.Length} \t ");
        }
      /*  public double this[double a]
        {
            get
        }
        */


        public int this[int y]
        {
            get
            {
                arr1 = new int[arr2.GetLength(1)];

                for (int i = 0; i < arr2.GetLength(1); i++)
                {
                    arr1[i] = arr2[y, i];
                }
                Console.WriteLine();
                for (int i = 0; i < arr1.GetLength(0); i++)
                {
                    Console.Write(arr1[i] + "\t");
                }
                //Console.WriteLine($"\t Сума:{arr1.Sum()}");
                int sum = arr1.Sum();
                return sum;
            }
            
        }

    }

}
