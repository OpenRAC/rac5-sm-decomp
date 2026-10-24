typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003A25D0;

void func_13FDD0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003A25D0.a = 0;
        D_003A25D0.d = 1.0f;
        D_003A25D0.c = 0;
        D_003A25D0.b = 0;
    }
}
