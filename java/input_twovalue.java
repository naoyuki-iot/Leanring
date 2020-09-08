import java.io.*;
public class input_twovalue {
    //例外管理のため　throws IOException　を呼び出し
    public static void main(String args[])throws IOException
    {
        System.out.println("input two value:");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 

        String str1=br.readLine();
        String str2=br.readLine();

        int num1=Integer.parseInt(str1);//String->intへキャスト(文字列->数値)
        int num2=Integer.parseInt(str2);

        System.out.println(num1);
        System.out.println(num2);
    }
}