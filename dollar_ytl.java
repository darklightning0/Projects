/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    int dolar, tl;
		System.out.println("Dolar kurunu giriniz.");
		Scanner scanner = new Scanner(System.in);
		double dolar_kuru = scanner.nextDouble();
		System.out.println("Kaç tane dolar değeri hesaplamak istiyorsunuz?");
		int i = scanner.nextInt();
		 double[][] paralar = new double[2][i];
		for(int q = 0; q < i; q++){
		    System.out.println((q + 1) + ". dolar değerini giriniz.");
		    paralar[0][q] = scanner.nextDouble();
		    paralar[1][q] = paralar[0][q] * dolar_kuru;

		}
        for(int y = 0; y < i; y++){
            System.out.println((y + 1) + ". dolar değeri: " + paralar[0][y] +  "   YTL cinsinden değeri: " + paralar[1][y]);
        }
	}
}
