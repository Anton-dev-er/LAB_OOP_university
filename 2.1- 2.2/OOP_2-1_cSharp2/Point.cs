using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_2_1_cSharp2
{
	class Point
	{
		protected double xA, yA;
		public void set_xA(double xA)
		{
			this.xA = xA;
		}

		public void set_yA(double yA)
		{
			this.yA = yA;
		}
	}
	class Line : Point
	{
		protected double xB, yB;
		public void set_xB(double xB)
		{
			this.xB = xB;
		}
		public void set_yB(double yB)
		{
			this.yB = yB;
		}
		public double length_line()
		{
			double lenght = Math.Sqrt(Math.Pow(xB - xA, 2) + Math.Pow(yB - yA, 2));
			return lenght;
		}
	}
	class Ellipse : Line
	{
		private double xO, yO;
		private double x_A, y_A, x_B, y_B, x_C, y_C, x_D, y_D;
	public Ellipse()
	{
		x_A = 1;
		y_A = 1;

		x_B = 5;
		y_B = 3;

		x_C = 1;
		y_C = 5;

		x_D = -5;
		y_D = 3;
	}

		public void set_O()
		{
			double xO = (x_A + x_C) / 2;
			double yO = (y_A + y_C) / 2;
            Console.WriteLine($"Координати центра: {xO} {yO}");
		}

		public double set_smaller_radius()
		{
			return Math.Sqrt(Math.Pow(x_C - x_A, 2) + Math.Pow(y_C - y_A, 2));
		}

		public double set_bigger_radius()
		{
			return Math.Sqrt(Math.Pow(x_D - x_B, 2) + Math.Pow(y_D - y_B, 2));
		}

		public double set_area(double r1, double r2)
		{
			return 3.14 * (r1 / 2) * (r2 / 2);
		}

		public double eccentricity(double focus, double half_bigger_r)
		{
			return focus / half_bigger_r;
		}

		public double get_x_A()
		{
			return x_A;
		}

		public double get_x_C()
		{
			return x_C;
		}

	}

}
