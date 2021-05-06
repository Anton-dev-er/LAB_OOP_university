using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_2_1_cSharp_1
{
	class Line
	{
		protected int lenght;
		protected int xA, yA, xB, yB;
		public void set_xA(int xA)
		{

			this.xA = xA;
		}
		public void set_yA(int yA)
		{
			this.yA = yA;

		}
		public void set_xB(int xB)
		{
			this.xB = xB;
		}
		public void set_yB(int yB)
		{
			this.yB = yB;
		}
		public int length_line()
		{
			int lenght = (int)Math.Sqrt(Math.Pow(yA - xA, 2) + Math.Pow(yB - xB, 2));
			return lenght;
		}

	}
	class Segment : Line
	{
		public Segment(int xA, int xB, int yA, int yB)
		{
			this.xA = xA;
			this.xB = xB;
			this.yA = yA;
			this.yB = yB;

		}

		public int get_xA()
		{
			return xA;
		}
		public int get_yA()
		{
			return yA;
		}
		public int get_xB()
		{
			return xB;
		}
		public int get_yB()
		{
			return yB;
		}
		public int length_line_x2(int len)
		{
			return len * 2;
		}


	}
}
