while True:
    print("タンパク質のアミノ酸配列を入力してください（終了は x）")
    x=input()
    if x=="x" or x=="X":
        break

    a=x.count("a")+x.count("A")
    c=x.count("c")+x.count("C")
    d=x.count("d")+x.count("D")
    e=x.count("e")+x.count("E")
    f=x.count("f")+x.count("F")
    g=x.count("g")+x.count("G")
    h=x.count("h")+x.count("H")
    j=x.count("i")+x.count("I")
    k=x.count("k")+x.count("K")
    l=x.count("l")+x.count("L")
    m=x.count("m")+x.count("M")
    n=x.count("n")+x.count("N")
    p=x.count("p")+x.count("P")
    q=x.count("q")+x.count("Q")
    r=x.count("r")+x.count("R")
    s=x.count("s")+x.count("S")
    u=x.count("t")+x.count("T")
    v=x.count("v")+x.count("V")
    w=x.count("w")+x.count("W")
    y=x.count("y")+x.count("Y")
    sp=x.count(" ")

    t=len(x)
    sum=0

    for i in range(t):
        t=t-1
        if a==t:
            sum=sum+t
            print("A:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if c==t:
            sum=sum+t
            print("C:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if d==t:
            sum=sum+t
            print("D:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if e==t:
            sum=sum+t
            print("E:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if f==t:
            sum=sum+t
            print("F:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if g==t:
            sum=sum+t
            print("G:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if h==t:
            sum=sum+t
            print("H:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if j==t:
            sum=sum+t
            print("I:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if k==t:
            sum=sum+t
            print("K:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if l==t:
            sum=sum+t
            print("L:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if m==t:
            sum=sum+t
            print("M:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if n==t:
            sum=sum+t
            print("N:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if p==t:
            sum=sum+t
            print("P:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if q==t:
            sum=sum+t
            print("Q:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if r==t:
            sum=sum+t
            print("R:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if s==t:
            sum=sum+t
            print("S:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if u==t:
            sum=sum+t
            print("T:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if v==t:
            sum=sum+t
            print("V:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if w==t:
            sum=sum+t
            print("W:","{:.2f}".format(t*100/(len(x)-sp)),"%")
        if y==t:
            sum=sum+t
            print("Y:","{:.2f}".format(t*100/(len(x)-sp)),"%")

    pp=(len(x)-sum-sp)*100/len(x)
    print("ns:","{:.2f}".format(pp),"%")