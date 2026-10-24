typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027B078;

void func_0C5D88(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027B078.a = 0;
        D_0027B078.d = 1.0f;
        D_0027B078.c = 0;
        D_0027B078.b = 0;
    }
}
