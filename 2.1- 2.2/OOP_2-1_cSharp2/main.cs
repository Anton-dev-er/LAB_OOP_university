using System;

namespace OOP_2_1_cSharp2
{
    class main
    {
        static void Main(string[] args)
        {

			Ellipse ellipse = new Ellipse();
			double smaller_radius, bigger_radius, e;
			double area;
            Console.WriteLine("Введість координтаи для вокусної відстані A:");
			double xA = double.Parse(Console.ReadLine());
			double yA = double.Parse(Console.ReadLine());
            Console.WriteLine("Введість координтаи для вокусної відстані B:");
			double xB = double.Parse(Console.ReadLine());
			double yB = double.Parse(Console.ReadLine());

			ellipse.set_xA(xA);
			ellipse.set_yA(yA);
			ellipse.set_xB(xB);
			ellipse.set_yB(yB);
			ellipse.set_O();
			smaller_radius = ellipse.set_smaller_radius();
			bigger_radius = ellipse.set_bigger_radius();
			area = ellipse.set_area(smaller_radius, bigger_radius);
			e = ellipse.eccentricity(ellipse.length_line(), bigger_radius / 2);
			while (true)
			{
				if ((e < 0 || e > 1) || (xA != ellipse.get_x_A() || xB != ellipse.get_x_C()))
		{
                    Console.WriteLine("Це не елiпс");
					break;
				}
                Console.WriteLine($"Ексетрацитет елiпса(ростяжнiсть елiпса норма в межах від  0 до 1)): {e}");
                Console.WriteLine($"Бiльший радiус = {bigger_radius}");
                Console.WriteLine($"Менший радiус = {smaller_radius}");
                Console.WriteLine($"Фокусна вiдстань = {ellipse.length_line()}");
                Console.WriteLine($"Площа елiпса = {area}");

				break;
			}
		}
    }
}
