import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static boolean areAllTrue(boolean[] array)
    {
    for(boolean b : array) if(!b) return false;
    return true;
    }


	public static void main (String[] args) throws java.lang.Exception
	{
    Scanner scanner = new Scanner(System.in);
    char letter;
    int HealthAmount = 5;
    String[] data = new String[] {"first", "second", "third"};
    Random rand = new Random();
    String temp = data[rand.nextInt(data.length)];
    boolean[] guessed_temp = new boolean[temp.length()];
    while (HealthAmount > 0 ) {
      System.out.println("Guess the letter");
      letter = scanner.next().charAt(0);
      if (temp.indexOf(String.valueOf(letter)) != -1) {
        for (int i = 0; i < temp.length(); ++i) {
          if (temp.charAt(i) == letter) { guessed_temp[i] = true; }
          if (guessed_temp[i]) {System.out.print(temp.charAt(i));}
          else {System.out.print("_");}
        } System.out.println();
        if (areAllTrue(guessed_temp)) { System.out.println("Hooray!"); break; }
      } else {
        HealthAmount--;
        System.out.println("There isn`t such letter");
      } if (HealthAmount == 0) { System.out.println("You lost"); break; }
    }
	}
}
