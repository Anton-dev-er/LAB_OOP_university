using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_3_4_update_cSHARP
{
	class Program
	{
		static void Main(string[] args)
		{
			Console.WriteLine("\n====Массив====");
			Square[] arr = new Square[22];
			SetMass(ref arr);
			for (int i = 0; i < 22; i++)
			{
				Console.WriteLine($"{i + 1}.Периметр:{arr[i].PerimetrForArr()}\tПлоща:{arr[i].AreaForArr()}");

			}


			//Параметри за замовчуванням
			Square1();

			//Квадрта з введженими координатами
			Square2();

			double xD = double.Parse(Console.ReadLine());

		}

		static void Square1()
        {
			Console.WriteLine("\n====Параметри за замовчуванням====");
			Square square1 = new Square();
			double ab = square1.SideAB();
			double bc = square1.SideBC();
			double cd = square1.SideCD();
			double ad = square1.SideAD();
			Check_the_square(ref ab, ref bc, ref cd, ref ad);

		}
		static void Square2()
        {
			Console.WriteLine("\n====Введжені параметри====");
			Console.WriteLine("Введіть вершину А:");
			double xA = double.Parse(Console.ReadLine());
			double yA = double.Parse(Console.ReadLine());
			Console.WriteLine("Введіть вершину B:");
			double xB = double.Parse(Console.ReadLine());
			double yB = double.Parse(Console.ReadLine());
			Console.WriteLine("Введіть вершину C:");
			double xC = double.Parse(Console.ReadLine());
			double yC = double.Parse(Console.ReadLine());
			Console.WriteLine("Введіть вершину D:");
			double xD = double.Parse(Console.ReadLine());
			double yD = double.Parse(Console.ReadLine());

			Square square2 = new Square();
			square2.set_xA(xA);
			square2.set_xB(xB);
			square2.set_xC(xC);
			square2.set_xD(xD);
			square2.set_yA(yA);
			square2.set_yB(yB);
			square2.set_yC(yC);
			square2.set_yD(yD);
			double ab_ = square2.SideAB();
			double bc_ = square2.SideBC();
			double cd_ = square2.SideCD();
			double ad_ = square2.SideAD();
			Check_the_square(ref ab_, ref bc_, ref cd_, ref ad_);
		}

		static void SetMass(ref Square[] arr)
		{
			Random rand = new Random();
			double ab, bc, cd, ad;
			int j = 0;
			while (j < 11)
			{
				ab = rand.Next(4);
				bc = rand.Next(4);
				cd = rand.Next(4);
				ad = rand.Next(4);
				if (ab == bc && ab == cd && ab == ad)
				{
					arr[j] = new Square(ab, bc, cd, ad);
					j++;
				}
			}
			int a = j - 1;
			for (int i = 0; i < 11; i++)
			{
				arr[j + i] = arr[a - i];
			}

		}

		static void Check_the_square(ref double ab, ref double bc, ref double cd, ref double ad)
		{
			if (ab == bc && ab == cd && ab == ad)
			{
				Console.WriteLine($"Периметр: {ab + bc + cd + ad}");
				Console.WriteLine($"Площа: {Math.Pow(ab, 2)}");
			}
			else
			{
				Console.WriteLine("\nНеправильно введені координати.Спробуйте ще раз.");
				Square2();
			}
		}

		
	}

}

