typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00342FE8;

void func_0EAAB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00342FE8.a = 0;
        D_00342FE8.d = 1.0f;
        D_00342FE8.c = 0;
        D_00342FE8.b = 0;
    }
}
