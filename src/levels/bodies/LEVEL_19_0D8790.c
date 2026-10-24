typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027B948;

void func_0D8790(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027B948.a = 0;
        D_0027B948.d = 1.0f;
        D_0027B948.c = 0;
        D_0027B948.b = 0;
    }
}
