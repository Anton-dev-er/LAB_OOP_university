using System;

namespace OOP_2_1_cSharp_1
{
    class main
    {
        static void Main(string[] args)
        {
            Segment segment = new Segment(1, 1, 5, 1);
            segment.set_yA(10);
            int len = segment.length_line();
            Console.WriteLine($"Довжина відрізка: {len}");
            Console.WriteLine($"Збільшення відрізка на 2: {segment.length_line_x2(len)}");
            Console.WriteLine($"Координати A: {segment.get_xA()} , {segment.get_yA()}");
            Console.WriteLine($"Координати B: { segment.get_xB()} , {segment.get_yB()}");
        }
    }
}
