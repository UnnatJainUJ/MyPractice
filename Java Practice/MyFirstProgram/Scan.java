import java.util.Scanner;;

public class Scan {
  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    System.out.println("What is your name: ");
    String name = scanner.nextLine();
    
    System.out.println("What is your age: ");
    int age = scanner.nextInt();
    scanner.nextLine();
    System.out.println("What is your favourite food: ");
    String food = scanner.nextLine();

    System.out.println("This is your name: " + name);
    System.out.println("This is your age: " + age);
    System.out.println("You like: " + food);
  }
}