typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AE048;

void func_161ED0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AE048.a = 0;
        D_003AE048.d = 1.0f;
        D_003AE048.c = 0;
        D_003AE048.b = 0;
    }
}
