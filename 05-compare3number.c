int main ()
{
    int a;
    int b;
    int c;
    printf ("\nnhap a");
    scanf ("%d",&a);
    printf ("\nnhap b");
    scanf ("%d",&b);
    printf ("\nnhap c");
    scanf ("%d",&c);
    if (a>b && a>c) {
        printf ("a lon nhat");
    }else if (a==b&& a>c){
        printf ("a bang b, a lon hon c");
    }else if (a==c&& a>b){
        printf ("a bang c, a lon hon b");
    }else if (b>a&& b>c){
        printf ("b lon nhat");
    }else if (b==c&& b>a){
        printf ("b bang c va b lon hon a");
    }else if (c>a&& c>b){
        printf ("c lon nhat");
    }
    return 0;
}