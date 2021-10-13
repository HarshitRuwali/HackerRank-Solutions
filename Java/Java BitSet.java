import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        BitSet bit1 = new BitSet(n);
        BitSet bit2 = new BitSet(n);
        
        while(m-- > 0){
            
            String op = scan.next();
            int a = scan.nextInt();
            int b = scan.nextInt();
            
            switch(op){
                case "AND":
                    if(a == 1){
                        bit1.and(bit2);
                    }else{
                        bit2.and(bit1);
                    }
                    break;
                case "OR":
                    if(a == 1){
                        bit1.or(bit2);
                    }else{
                        bit2.or(bit1);
                    }
                    break;
                case "XOR":
                    if(a == 1){
                        bit1.xor(bit2);
                    }else{
                        bit2.xor(bit1);
                    }
                    break;
                case "SET":
                    if(a == 1){
                        bit1.set(b);
                    }else{
                        bit2.set(b);
                    }
                    break;
                case "FLIP":
                    if(a == 1){
                        bit1.flip(b);
                    }else{
                        bit2.flip(b);
                    }
                    break;
                default:
                    break;
            }
            System.out.println(bit1.cardinality() + " " + bit2.cardinality());
        }
        scan.close();
    }
}