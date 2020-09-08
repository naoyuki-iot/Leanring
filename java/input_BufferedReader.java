import java.io.*;
class input_BufferedReader {
    private static void SysOutPri(String str)
    {
        System.out.println(str);
    }
    public static void main(String[]args) throws IOException
    {
        System.out.print("input string:");//ここは改行なしで実装
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); //System.in:キーボードからの入力を引数に指定
        String str=br.readLine();//入力した文字を文字列として読み取る
        SysOutPri(str);
    }
}