import java.util.Scanner;

public class input_Scanner {
  public static void main (String[] args) {

      // System.in -> キーボード入力を受け付けるための引数
      Scanner scanner = new Scanner(System.in);
      System.out.print("名前を入力してください：");
      
      // キーボード入力を受け付ける
      String name = scanner.next();
      
      scanner.close();
      System.out.println("こんにちは、" + name + "さん");
    }
}