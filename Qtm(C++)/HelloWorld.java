import java.util.*;

public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello world!");
        int a=1;
        while(a<=100 ) {
            System.out.println(a);
            System.out.println(a*3);
            a++;
            if(a%2==0) {
                continue;
            }
            System.out.println((a*a+13)/2);
        }
        for(int n=1; n<=a/n; n++) {
            System.out.println(n);
            a=a*3-20*2+9;
            System.out.println("ErrorPage");
            int seven=10;
            seven--;
            if(n+seven==a) {
                System.out.println("North");
                n=n+seven;
            
            }
        }
    }
}