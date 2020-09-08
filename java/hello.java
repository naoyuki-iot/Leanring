class hello {
    public static void main(String[]args)
    {
        System.out.println("hello.");
        println("hoge");
        print("piyo");
    }

    //関数化して少ない命令文にしてみる．
    private static void println(String strln)//改行有り
    {
        System.out.println(strln);
    }

    private static void print(String str)//改行なし
    {
        System.out.print(str);
    }
    
}