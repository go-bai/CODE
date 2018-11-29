import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner cin=new Scanner(System.in);
		BigInteger n=BigInteger.ZERO;
		BigInteger zero=BigInteger.ZERO;
		BigInteger sum=BigInteger.ZERO;
		while(cin.hasNext()) {
			n=cin.nextBigInteger();
			if(n.equals(zero)) {
				System.out.println(sum);
			}
			sum=sum.add(n);
		}
	}
}
