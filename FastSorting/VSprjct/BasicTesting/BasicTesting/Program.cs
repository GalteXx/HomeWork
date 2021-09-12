using System;
using System.Net.NetworkInformation;
using System.Media;
using System.Threading.Tasks;

namespace BasicTesting
{
    class Program
    {
        static SoundPlayer oleg = new SoundPlayer("C:/Users/Maxim/Documents/Архив/Coding/homework/HomeWork/FastSorting/VSprjct/BasicTesting/BasicTesting/key.wav");
        static void Main(string[] args)
        {
            NormalMain();
        }
        static async void NormalMain()
        {
            oleg.Load();
            string[] arr = new string[3];
            beop();
            arr[0] = Console.ReadLine();
        }
        static Task  beop()
        {
            while(true)
            {
                Console.ReadKey();
                oleg.Play();
            }
            return Task.CompletedTask;
        }
        

    }
}
