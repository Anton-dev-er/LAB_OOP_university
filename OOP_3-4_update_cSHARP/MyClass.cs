using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Math;

namespace OOP_3_4_update_cSHARP
{
	public class Square
	{
		private double xA, xB, xC, xD, yA, yB, yC, yD;
		double ab, bc, cd, ad;
		double perimetr, area;
		public Square()
		{
			xA = 1;
			yA = 1;
			xB = 1;
			yB = 2;
			xC = 2;
			yC = 2;
			xD = 2;
			yD = 1;

		}
		public Square(double ab, double bc, double cd, double ad)
		{
			this.ab = ab;
			this.bc = bc;
			this.cd = cd;
			this.ad = ad;
		}


		/*	public double Perimetr()
			{
				double ab = Math.Sqrt(Math.Pow(xB - xA, 2) + Math.Pow(yB - yA, 2));
				double bc = Math.Sqrt(Math.Pow(xC - xB, 2) + Math.Pow(yC - yB, 2));
				double cd = Math.Sqrt(Math.Pow(xD - xC, 2) + Math.Pow(yD - yC, 2));
				double ad = Math.Sqrt(Math.Pow(xD - xA, 2) + Math.Pow(yD - yA, 2));
				double perimetr = ab + bc + cd + ad;
				if (ab == bc && ab == cd && ab == ad)
				{
					return perimetr;
				}
				else
				{
					return 0;
				}
			}*/
		public double AreaForArr()
		{
			//cout << xA << yA << xB << yB << xC << yC << xD << yD << endl;
			double area = Pow(ab, 2);
			return area;

		}

		public double PerimetrForArr()
		{
			double perimetr = ab * 4;
			return perimetr;
		}
		public double SideAB()
		{
			double ab = Sqrt(Pow(xB - xA, 2) + Pow(yB - yA, 2));
			return ab;

		}
		public double SideBC()
		{
			double bc = Math.Sqrt(Math.Pow(xC - xB, 2) + Math.Pow(yC - yB, 2));
			return bc;
		}
		public double SideCD()
		{
			double cd = Math.Sqrt(Math.Pow(xD - xC, 2) + Math.Pow(yD - yC, 2));
			return cd;
		}
		public double SideAD()
		{
			double ad = Math.Sqrt(Math.Pow(xD - xA, 2) + Math.Pow(yD - yA, 2));
			return ad;
		}


		public void set_xA(double xA)
		{
			this.xA = xA;
		}
		public void set_yA(double yA)
		{
			this.yA = yA;
		}
		public void set_xB(double xB)
		{
			this.xB = xB;
		}
		public void set_yB(double yB)
		{
			this.yB = yB;
		}
		public void set_xC(double xC)
		{
			this.xC = xC;
		}
		public void set_yC(double yC)
		{
			this.yC = yC;
		}
		public void set_xD(double xD)
		{
			this.xD = xD;
		}
		public void set_yD(double yD)
		{
			this.yD = yD;
		}
    }
}
